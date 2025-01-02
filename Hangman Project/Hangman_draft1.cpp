#include <iostream>
using namespace std;
int main()
{
    int attempt = 10;
    string guessedLetters, inputWord, secretWord, guess;
    string name[2];
    cout << "Enter the name of player 1: ";
    cin >> name[0];
    cout << "Enter the name of player 2: ";
    cin >> name[1];
            cout << endl << name[0] << ": Enter the word for " << name[1] << ": ";
            cin >> inputWord;

            secretWord = string(inputWord.length(), '_');
            attempt = 10;
            guessedLetters = "";
            while (attempt > 0 && secretWord != inputWord)
            {
                cout << "Word: " << secretWord << endl;
                cout << name[1] << ", please enter your guess: ";
                cin >> guess;
                cout << "Remaining attempts: " << attempt << endl;
                guessedLetters += tolower(guess[0]);
                guessedLetters += ' ';
                cout << "Guessed letters: " << guessedLetters << endl;
                bool correct = false;

                for (int i = 0; i < inputWord.length(); i++) {
                    if (tolower(guess[0]) == tolower(inputWord[i])) {
                        secretWord[i] = inputWord[i]; // Use original case
                        correct = true;
                    }
                }

                if (!correct)
                {
                    attempt--;
                    cout << "Incorrect guess" << endl<<endl;
                }
cout<<endl;

                if (secretWord == inputWord)
                {
                    cout << "\nCongratulations, you have found the word: " << inputWord << endl;
                }
                if (attempt ==0 ){
                    cout<<" Sorry you ran out of attempts. The word was: "<< inputWord <<endl;
                }
}
             return 0;
}
