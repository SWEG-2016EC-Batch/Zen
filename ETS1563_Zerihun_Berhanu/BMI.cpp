#include <iostream>
using namespace std;
int main(){
	float weight,height, BMI;
	string next;
do  {
    again:
	cout<<"Enter the weight of the person(kg)"<<endl;
	cin>>weight;
	cout<<"Enter the height of the person(m)"<<endl;
	cin>>height;
	if ((height <= 0 || weight <= 0) || cin.fail()){
    cin.clear ();
    cin.ignore();
    cout<<"Invalid Input"<<endl;
    goto again;
	}
	else {
        	BMI = weight / (height*height);
	cout<<"Your BMI is: " <<BMI<<endl;

    	if (BMI < 18.5){
		cout<<"You are underweight"<<endl;
	}
	else if (18.5 <= BMI && BMI  <= 24.9){
		cout<<"You are normal"<<endl;
	}
	else{
		cout<<"You are overwieght"<<endl;
	}
	}
cout<<"Do you want to continue? (yes/no) ";
cin>>next;
} while (next == "yes");

	return 0;
}
