#include <iostream>
using namespace std;
int main (){
float test, quiz, project, assignment, finalExam, total;
cout<<"Enter your test score out of 15: ";
cin>>test;
cout<<"Enter your quiz score out of 5: ";
cin>>quiz;
cout<<"Enter your project score out of 20: ";
cin>>project;
cout<<"Enter your assignment score out of 10: ";
cin>>assignment;
cout<<"Enter your final exam score out of 50: ";
cin>>finalExam;
total = test+quiz+project+assignment+finalExam;
if (total >= 90){
cout<<"You got "<<"A+";
}
else if (total >= 80){
cout<<"You got "<<"A";
}
else if (total >= 75){
cout<<"You got "<<"B";
}
else if (total >= 60){
cout<<"You got "<<"B+";
}
else if (total >= 55){
cout<<"You got "<<"B";
}
else if (total >= 45){
cout<<"You got "<<"C";
}
else if (total >= 30){
cout<<"You got "<<"D";
}
else {
cout<<"F";
}
return 0;
}
