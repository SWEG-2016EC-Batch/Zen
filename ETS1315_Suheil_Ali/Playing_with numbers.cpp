#include <iostream>
using namespace std;

int main() {
   int choice;
   bool progress = true;

   while(progress)
   {

   cout << "     MENU         "<<endl;
   cout<< "choose 1 to reverse a number"<<endl;
   cout<< "choose 2 to count number of digits"<<endl;
   cout<< "choose 3 to get the even products of a number"<<endl;
   cout<< "choose 4 to have the first,the last digit and their sum of a number"<<endl;
   cout<< "choose 5 to swap the first and last digit of a number"<<endl;
   cout<< "choose 6 to check if a number is Palindrome"<<endl;
   cout<< "choose 7 to know frequency of digits in a number"<<endl;
   cout<< "choose 8 to check if a number is strong"<<endl;
   cout<< "choose 9 to check if a number is perfect"<<endl;
   cout<< "choose 10 to quit the program"<<endl;
   cout<< "Please enter your choice: ";
   cin>>choice;
     switch(choice)
     {
     case 1:{
        int number, remainder, reversed = 0;
        cout << "Enter the number you want to reverse: ";
        cin >> number;
         while (number != 0)
            { remainder = number % 10;
            reversed = reversed * 10 + remainder;
             number /= 10;
              }
         cout << "The reversed number is: " << reversed << endl;
         break;
     }
     case 2:{
        int number , remainder , numcount;
    cout<<"Enter the number you want to be counted: ";
    cin>>number;
    do{
        remainder=number%10;
        number/=10;
        numcount++;
    }while(number!=0);
    cout<<numcount<<endl;
    break;
     }
     case 3:{
        int number , remainder , product=1;
    cout<<"Enter the number you want the evens to be multiplyed: ";
    cin>>number;
    while(number!=0)
    {
        remainder=number%10;
        if(remainder%2==0)
        {
            product*=remainder;
        }
        number=number/10;

    }
    cout<<"The product of the even numbers is: "<<product<<endl;
    break;
     }
     case 4:{
        int number , Fdigit , Ldigit , sum;
    cout<<"Enter the number you want to be have the first and the last digit: ";
    cin>>number;
        Ldigit=number%10;
        Fdigit = number;
    while(Fdigit>=10)
    {
        Fdigit=Fdigit/10;
    }
    cout<<"The first digit is "<<Fdigit<<endl;
    cout<<"The last digit is "<<Ldigit<<endl;
    sum= Ldigit+Fdigit;
    cout<<"The sum of the numbers is: "<<sum<<endl;
    break;
     }
     case 5:{
         int number, fDigit, lDigit, temp, divisor = 1;

    cout << "Enter the number you want to be swapped: ";
    cin >> number;
    temp = number;
    lDigit = temp % 10;
    while (temp >=10) {
        temp /= 10;
        cout<<temp<<endl;
        divisor *= 10;
        cout<<divisor<<endl;
    }
    fDigit = temp;
    number = (number % divisor) / 10;
    cout<<number<<endl;
    number = lDigit * divisor + number * 10 + fDigit;
    cout << "The number after swapping first and last digits is: " << number << endl;
    break;
     }
     case 6:{
        int number , remainder , reversed , first_num;
    cout<<"Enter the number you want to be reversed: ";
    cin>>number;
    first_num=number;
    while(number!=0)
    {
        remainder=number%10;
        reversed = reversed * 10 + remainder;
        number=number/10;

    }
    if(first_num==reversed)
    {
        cout<<"The number is palindrome"<<endl;
    }
    else{
        cout<<"The number is not palindrome"<<endl;
    }
    break;
     }
     case 7:{
        int frequency[10]={0} , number , remainder ;
cout<<"Please enter a number you want to know the frequency of the digits: ";
cin>>number;
if(number<0)
{
    number= -(number);
}
while(number!=0)
{
    remainder=number%10;
    switch(remainder)
    {
        case 0:
        frequency[0]++;
        break;
        case 1:
        frequency[1]++;
        break;
        case 2:
        frequency[2]++;
        break;
        case 3:
        frequency[3]++;
        break;
        case 4:
        frequency[4]++;
        break;
        case 5:
        frequency[5]++;
        break;
        case 6:
        frequency[6]++;
        break;
        case 7:
        frequency[7]++;
        break;
        case 8:
        frequency[8]++;
        break;
        case 9:
        frequency[9]++;
        break;
    }
    number/=10;
}
cout<<"Digit             Frequency"<<endl;
cout<<" 0             "<<frequency[0]<<endl;
cout<<" 1             "<<frequency[1]<<endl;
cout<<" 2             "<<frequency[2]<<endl;
cout<<" 3             "<<frequency[3]<<endl;
cout<<" 4             "<<frequency[4]<<endl;
cout<<" 5             "<<frequency[5]<<endl;
cout<<" 6             "<<frequency[6]<<endl;
cout<<" 7             "<<frequency[7]<<endl;
cout<<" 8             "<<frequency[8]<<endl;
cout<<" 9             "<<frequency[9]<<endl;
break;
     }
        case 8:{
            int number , sum  , remainder , temp;
    cout<<"Enter the number you want to check if it's strong: ";
    cin>>number;
    temp=number;
    while(number!=0)
    {
        remainder = number%10;
        int fact=1;
        for(int i=1 ; i<=remainder ; i++)
        {
            fact*=i;
        }
        sum+=fact;
        number/=10;
    }
    if(temp == sum)
    {
        cout<<"It is a strong number"<<endl;
    }
    else{
        cout<<"It is not a strong number"<<endl;
    }
    break;
     }
        case 9:{
            int number , sum , half ;
   cout<<"Enter the number you want to check if it is perfect: ";
   cin>>number;
   half = number/2;
   for(int i=1 ; i<=half ; i++)
   {
       if(number%i==0)
       {
           sum+=i;
       }
   }
   if(sum==number)
   {
       cout<<"The number is perfect"<<endl;
   }
   else{
    cout<<"The number is not perfect"<<endl;
   }
   break;
        }
        case 10:{
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
