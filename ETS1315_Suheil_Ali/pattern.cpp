#include <iostream>
using namespace std;

int main() {
   int choice;
   bool progress = true;

   while(progress)
   {

   cout << "     MENU         "<<endl;
   cout<< "choose 1 for repetition in rectangular way"<<endl;
   cout<< "choose 2 for alphabet repetition in rectangular way"<<endl;
   cout<< "choose 3 for for left triangular pyramid"<<endl;
   cout<< "choose 4 for right pyramid triangle with number"<<endl;
   cout<< "choose 5 for the left pyramid triangle with alphabet"<<endl;
   cout<< "choose 6 repetition of numbers rectangular way in alphabet"<<endl;
   cout<< "choose 7 for hollow inverted triangle"<<endl;
   cout<< "choose 8 for hollow rectangle"<<endl;
   cout<< "choose 9 for half inverted pyramid"<<endl;
   cout<< "choose 10 for full pyramid"<<endl;
   cout<< "choose 11 for inverted pyramid"<<endl;
   cout<< "choose 12 hollow pyramid"<<endl;
   cout<< "choose 13 to quite the program"<<endl;
   cout<< "Please enter your choice: ";
   cin>>choice;
     switch(choice)
     {
     case 1:{
        int number;
   cout<<"Enter the number for repetition of numbers rectangular way";
   cin>>number;
   for (int j=1; j<=number ; j++)
   {
   for(int i=1;i<=number;i++)
   {
       cout<<i<<" ";
   }
   cout<<endl;
   }
         break;
     }
     case 2:{

 char alphabet='a';
 int number;
   cout<<"Enter the number for repetition of alphabet in rectangular way";
   cin>>number;
   for (int j=1; j<=number ; j++)
   {
   for(int i=1;i<=number;i++)
   {
       cout<<alphabet++<<" ";
   }
   cout<<endl;
   }
    break;
     }
     case 3:{
        int number;
    cout << "Enter the number of rows for left triangular pyramid: ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
    break;
     }
     case 4:{
    int number;
    cout << "Enter the number of rows for right pyramid triangle with number: ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        for (int j = 1; j <= number - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

    break;
     }
     case 5:{
int number;
    cout << "Enter the number of rows for the left pyramid triangle with alphabet: ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        char alphabet = 'A';
        for (int j = 1; j <= i; j++) {
            cout << alphabet;
            alphabet++;
        }
        cout << endl;
    }
    break;
     }
     case 6:{
        int number;
   cout<<"Enter the number of rows for repetition of numbers rectangular way in alphabet";
   cin>>number;
   for (int j=1; j<=number ; j++)
   {
       char alphabet='a';
   for(int i=1;i<=number;i++)
   {
       cout<<alphabet<<" ";
       alphabet++;
   }
   cout<<endl;
   }
    break;
     }
     case 7:{
         int number;
    cout << "Enter the number of rows for hollow inverted triangle: ";
    cin >> number;

    for (int i = number; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (i == number || j == 1 || j == i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
break;
     }
        case 8:{
            int rows, columns;
    cout << "Enter the number of rows for hollow rectangle: ";
    cin >> rows;
    cout << "Enter the number of columns for hollow rectangle: ";
    cin >> columns;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            if (i == 1 || i == rows || j == 1 || j == columns) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    break;
     }
        case 9:{
    int number;
    cout << "Enter the number of rows for half inverted pyramid: ";
    cin >> number;

    for (int i = number; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
   break;
        }
        case 10:{
                int number;
    cout << "Enter the number of rows for the full pyramid: ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        for (int j = 1; j <= number - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
            break;
        }
        case 11:{
             int number;
    cout << "Enter the number of rows for inverted pyramid: ";
    cin >> number;

    for (int i = number; i >= 1; i--) {
        for (int j = 0; j < number - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
            break;
        }
        case 12:{
                int rows;
    cout << "Enter the number of rows for the hollow pyramid: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = i; j < rows; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == rows) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
            break;
        }
        case 13:{
            progress=false;
            break;
        }
        default:{
            cout<<"Please choose according to the menu"<<endl;
            break;
        }
     }

   }


    return 0;
}
