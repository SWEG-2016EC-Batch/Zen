#include <iostream>
#include <cmath>
using namespace std;
int main (){
double fileSize, bytes, timeRequired, days;
string type, next;
cout<<"Enter size of your file"<<endl;
cin>>fileSize;
next:
cout<<"Enter file size type (mb/gb/tb)"<<endl;
cin>>type;
if (type == "mb"){
 bytes = fileSize*pow(10,6);
}
else if (type == "gb"){
bytes = fileSize*pow(10,6)*125;
}
else if (type == "tb"){
 bytes = fileSize*pow(10,12);
}
else {
cin.clear();
cin.ignore ();
cout<<"Invalid input"<<endl;
goto next;
}
// Assume it requires 1 sec to transfer 960 characters (960 bytes).
timeRequired = bytes/960;
days = timeRequired/3600;
if (timeRequired > 3600){
cout<<"The time it is required to transfer the file is "<<days<<"days."<<endl;
}
else {
  cout<<"The time it is required to transfer the file is "<<timeRequired<<" seconds."<<endl;
}
return 0;
}
