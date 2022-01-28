#include <iostream>
#include <string>
using namespace std;

const double WEEKDAY_BUS_HOUR_RATE = .40;
const double WEEKDAY_COB_RATE = .25;
const double WEEKEND_RATE = .15;

int main()
{
    string dayOfWeek;
    int hour, minute, lengthOfCall;
    char temp;
    double costOfCall;

    cout<<"Please enter the day of the week, \n";
    cout<<"ie for Tuesday enter Tu: ";
    cin>>dayOfWeek;

    cout<<"Please enter the time the call started, \n";
    cout<<"in 24h format, ie 15:30: ";
    cin>>hour>>temp>>minute;

    cout<<"Please enter the length of the call in minutes: ";
    cin>>lengthOfCall;

    if(hour >= 8 && hour <= 18)
    {
        if (dayOfWeek != "Sa" && dayOfWeek != "Su")
        {
            costOfCall = lengthOfCall * WEEKDAY_BUS_HOUR_RATE;
        }
    }
    else if (hour < 8 || hour > 18)
    {
        if (dayOfWeek != "Sa" && dayOfWeek != "Su")
        {
            costOfCall = lengthOfCall * WEEKDAY_COB_RATE;
        }
    }
    else
    {
        if(dayOfWeek == "Sa" || dayOfWeek == "Su")
        {
            costOfCall = lengthOfCall * WEEKEND_RATE;
        }
    }

    cout<<"Cost of the call is: $"<<costOfCall<<endl;

    return 0;
}