// The hangman game project

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    int attempt = 10;// Number of attempts allowed
    int data[2][2] = {{0, 0}, {0, 0}}; // Initializing array to record the players statistics
    string guessedLetters, inputWord, secretWord, guess;
    int round = 0; // initializing round from zero to ask players to continue game
    char choice;
    string category; // for giving hint to guesser
    bool continuegame = true; // initializing the continuation of game as true
    string name[2];// Array to store player names

    // Input player names
    cout << "###############################################" << endl;
    cout << "###############################################" << endl << endl;
        cout << "WELCOME TO MULTIPLAYER HANGMAN GAME!" << endl << endl;
    cout << "###############################################" << endl;
      cout << "###############################################" << endl;
    cout << "Enter the name of player 1: ";
     getline(cin, name[0]);
    cout << "Enter the name of player 2: ";
     getline(cin, name[1]);

      do {
        for (int j = 0; j < 2; j++) { // initialize j from 0 to make it work for 2 player iterating until 2
            cout<<endl << name [j] << ": Enter the category of the word: ";
            getline(cin,category);
            label:
            cout << endl << name[j] << ": Enter the word for " << name[(j + 1) % 2] << ": "; // asks to input word for the other player
            cin >> inputWord;
              for (int i = 0; i < inputWord.length(); i++) {
                    if (!isalpha(inputWord[i])) {
                        cout << "Please enter only letters." << endl;
                        goto label;// this will reverse us back to the label place if the input isn't letter
                    }
             }
            cin.ignore(); // Clear the newline character from the input buffer
            system("cls");
            cout<<"The Catagory is: "<<category<<endl<<endl;
            bool wordGuessed = false; // Tracks whether the word has been completely guessed; used for updating player scores including how many times they played as guesser
            secretWord = string(inputWord.length(), '_');   // Initialize secret word with underscores
            attempt = 10;//Reset attempts
            guessedLetters = "";// Reset guessed letters


    // Game loop: continue until attempts run out or the word is guessed
            while (attempt > 0 && secretWord != inputWord)
            {
                cout << "Word: " << secretWord << endl;
                cout << "Remaining attempts: " << attempt << endl;// Show remaining attempts
                cout << name[(j + 1) % 2] << ", please enter your guess: ";// Prompt for guess
                getline(cin,guess);// Read player's guess
//Check whether the input is single alphabetic character or not
          if (!isalpha(guess[0]) || guess.length() != 1) {
                    cout << "Please enter only a single alphabet." << endl << endl;
                    continue;
                }
//Check if the letter is previously entered or not
                if (guessedLetters.find(tolower(guess[0])) != string::npos) {
                    cout << "You have already guessed that letter!" << endl << endl;
                    continue;
                }

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

                    // printing the hanged man pattern by matching the remaing attempts
                    
                     switch (attempt)
                {
                            
                    // left with 9 attempts
                    case 9: 
                            cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@" <<  endl<< endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl<< endl;
                            break;

                    // left with 8 attempts
                    case 8:
                            cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl<< endl;
                            cout << "_______" << endl;
                            cout << "|     |" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl<< endl;
                            break;
                    // left with 7 attempts
                    case 7:
                            cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl<< endl;
                            cout << " _______" << endl;
                            cout << "|     |" << endl;
                            cout << "|     O" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl<< endl;
                            break;
                    // left with 6 attempts
                    case 6:
                            cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl<< endl;
                            cout << " _______" << endl;
                            cout << "|     |" << endl;
                            cout << "|     O" << endl;
                            cout << "|     |" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl<< endl;
                            break;
                    // left with 5 attempts
                    case 5:
                            cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl<< endl;
                            cout << " _______" << endl;
                            cout << "|     |" << endl;
                            cout << "|     O" << endl;
                            cout << "|     |" << endl;
                            cout << "|    /" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl<< endl;
                            break;
                    // left with 4 attempts
                    case 4:
                            cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl<< endl;
                            cout << " _______" << endl;
                            cout << "|     |" << endl;
                            cout << "|     O" << endl;
                            cout << "|     |" << endl;
                            cout << "|    /|" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl<< endl;
                            break;
                    // left with 3 attempts
                    case 3:
                            cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl<< endl;
                            cout << " _______" << endl;
                            cout << "|     |" << endl;
                            cout << "|     O" << endl;
                            cout << "|     |" << endl;
                            cout << "|    /|\\" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl<< endl;
                            break;
                    // left with 2 attempts
                    case 2:
                            cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl<< endl;
                            cout << " _______" << endl;
                            cout << "|     |" << endl;
                            cout << "|     O" << endl;
                            cout << "|     |" << endl;
                            cout << "|    /|\\" << endl;
                            cout << "|     |" << endl;
                            cout << "|" << endl;
                            cout << "|" << endl;
                            cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl<< endl;
                            break;
                    // left with 1 attempts
                    case 1:
                            cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl<< endl;
                            cout << " _______" << endl;
                            cout << "|     |" << endl;
                            cout << "|     O" << endl;
                            cout << "|     |" << endl;
                            cout << "|    /|\\" << endl;
                            cout << "|     |" << endl;
                            cout << "|    / " << endl;
                            cout << "|" << endl;
                            cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl<< endl;
                            break;
                    // run out of attempt
                    default:
                            cout << endl << "Sorry you ran out of attempts. The word was " <<inputWord<<endl << endl;
                            cout << "***********************************************************************" << endl;
                            cout << "***********************************************************************" << endl << endl;
                            cout << "********** YOU COULD NOT SAVE THE MAN FROM HANGING **********"<< endl<< endl;
                            cout << " _______" << endl;
                            cout << "|     |" << endl;
                            cout << "|     O" << endl;
                            cout << "|     |" << endl;
                            cout << "|    /|\\" << endl;
                            cout << "|     |" << endl;
                            cout << "|    / \\" << endl;
                            cout << "|" << endl;
                            cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl<< endl;
                            cout << "***********************************************************************" << endl;
                            cout << "***********************************************************************" << endl;
                            break;
                }
                }
cout<<endl;

                 // Check for win condition
                if (secretWord == inputWord)
                {
                    cout << "\nCongratulations, you have found the word: " << inputWord << endl<<endl;
                    wordGuessed = true;
                    cout << "***********************************************************************" << endl;
                    cout << "***********************************************************************" << endl << endl;


                    cout << "********** YOU SAVED THE MAN FROM HANGING  **********" << endl;

                    cout << " _______" << endl;
                    cout << "|       " << endl;
                    cout << "|       " << endl;
                    cout << "|     O " << endl;
                    cout << "|     | " << endl;
                    cout << "|    /|\\" << endl;
                    cout << "|     |" << endl;
                    cout << "|    / \\" << endl;
                    cout << "***********************************************************************" << endl;
                    cout << "***********************************************************************" << endl;

                }


            }
            if (wordGuessed)
            {
                data[(j+1)%2][0]++; // Increment wins
            }
            else
            {
                data[(j+1)%2][1]++; // Increment losses
            }
            round++;
        }
            if (round % 2 == 0) {
            cout << "Do you want to continue the game? (y/n): ";
            cin >> choice;
            cin.ignore(); // Clear the newline character from the input buffer
            if (choice != 'Y' && choice != 'y') { // if it's not y or Y go out of the loop
                continuegame = false;
            }
        }

}while (continuegame); // while the bool continuegame is true
           cout << "====================================================================================================================" << endl<< endl;
    cout << "\nGame Results:\n";
    for (int i = 0; i < 2; i++)
    {
        cout << "Player " << name[i] << " - Played as guesser: " << data[i][0] + data[i][1] << " times, Wins: " << data[i][0] <<" times"<< ", Losses: " << data[i][1]<<" times"<<endl; // << ", Points: " << data[i][1] << endl;
    }


    if (data[0][0] > data[1][0])
    {
        cout << "The winner is " << name[0]<< endl;
    }
    else if (data[1][0] > data[0][0])

    {

        cout << "The winner is " << name[1] << endl;
    }
    else
    {
        cout << "It's a tie!" << endl;
    }
    cout << "====================================================================================================================" << endl<< endl;

             return 0;
}
