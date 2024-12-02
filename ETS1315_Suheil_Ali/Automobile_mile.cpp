#include<iostream>
using namespace std;
int main()
{
 float miles_per_gallon , amount_in_gallon,tot_miles ;
 cout<<"Please enter the amout in your gallon: ";
 cin>>amount_in_gallon;
 cout<<"Please enter the miles per gallons the automobiles can be driven: ";
 cin>>miles_per_gallon;
 tot_miles = miles_per_gallon * amount_in_gallon;
 cout<<"The total amout of miles the car can go without refueling is: "<<tot_miles<<endl;



return 0;
}
