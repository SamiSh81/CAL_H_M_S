#include <iostream>
using namespace std;

int per_time()
{
    int sec, min, hour,totale_per;
    cout << "ENTER NUMBER OF HOURS : ";
    cin >> hour;
    cout << "NUMBER OF MINTUS : ";
    cin >> min;
    cout << "NUMBER OF SECONDES : ";
    cin >> sec;
    hour = hour * 3600;
    min = min * 60;
    totale_per = hour + min + sec;
    cout << "THE TOTALE PERIOD OF SECONDES : " << totale_per << endl;
    return totale_per;
}

int time_per()
{
    int sec, min, hour, d_hour, d_sec;


    cout << "ENTER SECONDES : ";
    cin >> sec;

    

    hour = sec / 3600;//NUMBER OF HOURS
    d_hour = sec % 3600;
    min = d_hour / 60;//NUMBER OF MINTUS
    d_sec = sec % 60;//NUMBER OF SECONDES
   
    cout << "THE NUMBERS OF HOURS : " << hour << endl;
    cout << "NUMBER OF MINUTS : " << min << endl;
    cout << "NUMBER OF SECONDES : " << d_sec << endl;
    cout << "THE PERIOD IS : " << " H " << hour << " - MIN " << min << " - SEC " << d_sec << endl;

    return hour,d_hour,min,d_sec;
    
}
int main()
{
    time_per();
    per_time();

}
