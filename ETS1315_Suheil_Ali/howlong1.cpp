#include<iostream>
#include<string>
using namespace std;

int main()
{
    int transmission = 960;
    double filesize, byte, time, minu, hr, day;
    long int scale = 1048576;
    string type;


    cout << "Enter the size of the file you want to know the transmission time for: ";
    cin >> filesize;
    cout << "Is your file size in 'MB' or 'byte'? ";
    cin >> type;


    if (type == "MB") {
        byte = filesize * scale;
    } else if (type == "byte") {
        byte = filesize;
    }

    time = byte / transmission;
     if (time > 86400)
        {
        day = time / 86400;
        cout << "The transmission time is " << day << " days" <<endl;
        }
     else if (time > 3600)
      {
        hr = time / 3600;
        cout << "The transmission time is " << hr << " hours" <<endl;
      }
    else if (time > 60)
        {
        minu = time / 60;
        cout << "The transmission time is " << minu << " minutes" <<endl;
        }
    else {
        cout << "The transmission time is " << time << " seconds" <<endl;
    }



    return 0;
}
