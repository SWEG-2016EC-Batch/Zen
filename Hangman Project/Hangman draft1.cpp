#include <iostream>
using namespace std;
int main()
{
    int attempt = 10;// Number of attempts allowed
    string guessedLetters, inputWord, secretWord, guess;
    string name[2];// Array to store player names

    // Input player names
    cout << "Enter the name of player 1: ";
    cin >> name[0];
    cout << "Enter the name of player 2: ";
    cin >> name[1];

     // Player 1 inputs the word for Player 2 to guess
            cout << endl << name[0] << ": Enter the word for " << name[1] << ": ";
            cin >> inputWord;

     // Initialize secret word with underscores
            secretWord = string(inputWord.length(), '_');
            attempt = 10;//Reset attempts
            guessedLetters = "";// Reset guessed letters

    
    // Game loop: continue until attempts run out or the word is guessed
            while (attempt > 0 && secretWord != inputWord)
            {
                cout << "Word: " << secretWord << endl;
                cout << name[1] << ", please enter your guess: ";// Prompt for guess
                cin >> guess;// Read player's guess
                cout << "Remaining attempts: " << attempt << endl;// Show remaining attempts
              
                
        // Record the guessed letter
                guessedLetters += tolower(guess[0]);
                guessedLetters += ' ';
                cout << "Guessed letters: " << guessedLetters << endl;
                bool correct = false;

                 // Check if the guessed letter is in the input word
                for (int i = 0; i < inputWord.length(); i++) {
                    if (tolower(guess[0]) == tolower(inputWord[i])) {
                        secretWord[i] = inputWord[i]; // Use original case
                        correct = true;
                    }
                }

                
        // Decrease attempts if the guess was incorrect
                if (!correct)
                {
                    attempt--;
                    cout << "Incorrect guess" << endl<<endl;
                }
cout<<endl;

                 // Check for win condition
                if (secretWord == inputWord)
                {
                    cout << "\nCongratulations, you have found the word: " << inputWord << endl;
                }

                
        // Check for loss condition
                if (attempt ==0 ){
                    cout<<" Sorry you ran out of attempts. The word was: "<< inputWord <<endl;
                }
}
             return 0;
}