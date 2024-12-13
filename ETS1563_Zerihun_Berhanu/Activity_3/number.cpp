#include <iostream>
using namespace std;
int main (){
int num, backward = 0, rem, count = 0, even = 1, firstDigit, sum = 0, lastDigit, orginalNum;
bool isEven = false;
cout<<"Enter the number: ";
cin>>num;
orginalNum = num;
int choice;
cout<<"1. Print the reverse of the number "<<endl;
cout<<"2. Counts the number of digits of the number "<<endl;
cout<<"3. Find the product of even digits of the a given number "<<endl;
cout<<"4. Prints the first and the last digit of the number and find their sum "<<endl;
cout<<"5. Swap the first and the last digit of the number "<<endl;
cout<<"6. Check whether a number is palindrome or not. "<<endl;
cout<<"7. Find the frequency of each digit in a given integer and print in table format "<<endl;
cout<<"8. Check if a number is Strong or not "<<endl;
cout<<"9. Check whether a number is Perfect number or not "<<endl<<endl;
cout<<"Press any key (1-9) for the corresponding operation above: ";
cin>>choice;
switch (choice) {
  case 1:
do {
rem = num % 10;
num = num/10;
backward = backward*10 + rem;
}while (num != 0);
cout<<"The reverse of the number is "<<backward<<endl;
break;
  case 2:
do {
rem = num % 10;
num = num/10;
count++;
}while (num != 0);
cout<<"The number of digit is "<<count<<endl;
break;
  case 3:
do {
rem = num % 10;
num = num/10;
if (rem % 2 == 0){
even *= rem;
isEven = true;
}
}while (num != 0);
if (isEven){
cout<<"The product of even numbers is "<<even<<endl;
}
else {
cout<<"There is no even number/s in the number"<<endl;
}
break;
  case 4:
lastDigit = num % 10;
do {
rem = num % 10;
num = num/10;
firstDigit = rem;
}while (num != 0);
sum = firstDigit + lastDigit;
cout<<"The first digit is "<<firstDigit<<endl;
cout<<"The last digit is "<<lastDigit<<endl;
cout<<"The sum of the first and last digit is "<<sum<<endl;
break;
  case 5: {
int multiple = 1, middleNum, swappedNum;
lastDigit = num % 10;
do {
rem = num % 10;
num = num/10;
count++;
}while (num != 0);
firstDigit = rem;
    for (int i = 0; i < count-1; i++) {
         multiple *= 10;
    }
    middleNum = (orginalNum % multiple) / 10;
    swappedNum = (lastDigit * multiple ) + middleNum * 10 + firstDigit;
    cout << "Number after swapping the first and last digits: "<<swappedNum<<endl;
    break;
}
  case 6:
do {
rem = num % 10;
num = num/10;
backward = backward*10 + rem;
}while (num != 0);
if (orginalNum == backward){
    cout<<"The number is palindrome."<<endl;
}
else {
    cout<<"The number is not palindrome."<<endl;
}
break;
  case 7: {
      int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;
 do {
rem = num % 10;
switch (rem) {
    case 0: count0++; break;
    case 1: count1++; break;
    case 2: count2++; break;
    case 3: count3++; break;
    case 4: count4++; break;
    case 5: count5++; break;
    case 6: count6++; break;
    case 7: count7++; break;
    case 8: count8++; break;
    case 9: count9++; break;
}
num = num/10;
}while (num != 0);
 cout<<"Digit\tFrequency"<<endl;
 if (count0 != 0){
    cout<<"0\t"<<count0<<endl;
 }
 if (count1 != 0) {
    cout <<"1\t"<<count1<<endl;
 }
 if (count2 != 0) {
    cout <<"2\t"<<count2<<endl;
 }
 if (count3 != 0) {
    cout<<"3\t"<<count3<<endl;
 }
 if (count4 != 0) {
    cout<<"4\t"<<count4<<endl;
 }
 if (count5 != 0) {
    cout<<"5\t"<<count5<<endl;
 }
 if (count6 != 0) {
    cout<<"6\t"<<count6<<endl;
 }
 if (count7 != 0) {
    cout<<"7\t"<<count7<<endl;
 }
 if (count8 != 0) {
    cout<<"8\t"<<count8<<endl;
 }
 if (count9 != 0) {
    cout<<"9\t"<<count9<<endl;
 } }
    break;
  case 8: {
num = orginalNum;
do {
int factor = 1;
rem = num % 10;
for (int i = 1; i <= rem; i++){
    factor *= i;
}
sum += factor;
num = num/10;
}while (num != 0);
if (sum == orginalNum){
    cout<<"The number is strong number."<<endl;
}
else {
    cout<<"The number is not strong number."<<endl;
}
}
    break;
  case 9:
for (int i = 1; i <= num/2 ; i++){
    if (num % i == 0){
        sum += i;
    }
}
    if (sum == num){
    cout<<"The number is perfect number."<<endl;
    }
    else {
    cout<<"The number is not perfect number."<<endl;
    }
    break;
  default:
      cout<<"Your input doesn't match the key."<<endl;
      return 0;
    break;
}

return 0;
}
