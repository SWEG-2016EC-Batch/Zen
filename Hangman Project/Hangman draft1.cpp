#include <iostream>
using namespace std;
int main()
{
    int attempt = 10;// Number of attempts allowed
    string guessedLetters, inputWord, secretWord, guess;
    int round = 0; // initializing round from zero to ask players to continue game
    char choice;
    string category; // for giving hint to guessser
    bool continuegame = true; // initializing the continuation of game as true
    string name[2];// Array to store player names

    // Input player names
    cout << "Enter the name of player 1: ";
    cin >> name[0];
    cout << "Enter the name of player 2: ";
    cin >> name[1];

      do {
        for (int j = 0; j < 2; j++) { // initialize j from 0 to make it work for 2 player itterating until 2
            cout<<endl << name [j] << ": Enter the category of the word: ";
            cin>>category; // helps giving hint 
            cout << endl << name[j] << ": Enter the word for " << name[(j + 1) % 2] << ": "; // asks to input word for the other player
            cin >> inputWord;

     // Initialize secret word with underscores
            secretWord = string(inputWord.length(), '_');
            attempt = 10;//Reset attempts
            guessedLetters = "";// Reset guessed letters

    
    // Game loop: continue until attempts run out or the word is guessed
            while (attempt > 0 && secretWord != inputWord)
            {
                cout << "Word: " << secretWord << endl;
                cout << "Remaining attempts: " << attempt << endl;// Show remaining attempts
                cout << name[(j + 1) % 2] << ", please enter your guess: ";// Prompt for guess
                cin >> guess;// Read player's guess
                
              
                
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
            round++;
            if (round % 2 == 0) {
            cout << "Do you want to continue the game? (y/n): ";
            cin >> choice;
            if (choice != 'Y' && choice != 'y') { // if it's not y or Y go out of the loop 
                continuegame = false;
            }
        }
       
}
           }while (continuegame); // while the bool continuegame is true
             return 0;
}
