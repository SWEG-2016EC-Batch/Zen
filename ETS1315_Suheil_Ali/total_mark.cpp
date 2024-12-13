#include<iostream>
using namespace std;
int main()
{
    float quiz , test , project , assignment , final_exam , total_mark ;
    cout<<"Please enter your quiz result(5%): ";
    cin>>quiz ;
    cout<<"Please enter your test result(15%): ";
    cin>>test ;
    cout<<"Please enter your project result(20%): ";
    cin>>project ;
    cout<<"Please enter your assignment result(10%): ";
    cin>>assignment ;
    cout<<"Please enter your final exam result(50%): ";
    cin>>final_exam ;
    total_mark = quiz + test + project + assignment + final_exam ;
    cout<<"Your total mark is: "<<total_mark<<endl;
    if(total_mark>=90)
    {
        cout<<"Your grade is A+";
    }
    else if(total_mark>=80)
    {
        cout<<"Your grade is A";
    }
    else if(total_mark>=75)
    {
        cout<<"Your grade is B+ ";
    }
    else if(total_mark>=60)
    {
        cout<<"Your grade is B";
    }
    else if(total_mark>=55)
    {
        cout<<"Your grade is C+";
    }
    else if(total_mark>=45)
    {
        cout<<"Your grade is C";
    }
    else if(total_mark>=30)
    {
        cout<<"Your grade is D";
    }
    else if(total_mark<30)
    {
        cout<<"Your grade is F";
    }




    return 0;
}
