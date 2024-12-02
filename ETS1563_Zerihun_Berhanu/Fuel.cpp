#include <iostream>
using namespace std;
int main (){
float volume, miles_per_gallon, total;
again:
cout<<"Enter the volume of the fuel in the fuel tank (gallon): ";
cin>>volume;
cout<<"Enter the number of miles the car can be driven with one gallon of fuel: ";
cin>>miles_per_gallon;
if ((volume < 0 || miles_per_gallon < 0)|| cin.fail()){
    cin.clear();
    cin.ignore ();
    cout<<"Invalid input"<<endl;
    goto again;
}
total = volume*miles_per_gallon;
cout<<"The car can be driven "<<total<<" miles with the current volume.";
return 0;
}
