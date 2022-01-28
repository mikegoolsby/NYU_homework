#include <iostream>
using namespace std;

int minutesInHours = 60;
int hoursInDay = 24;

int main()
{
    int daysJohnWorked, hoursJohnWorked, minJohnWorked;
    int daysBillWorked, hoursBillWorked, minBillWorked;
    cout<<"Please enter the number of days John has worked: ";
    cin>>daysJohnWorked;
    cout<<"Please enter the number of hours John has worked: ";
    cin>>hoursJohnWorked;
    cout<<"Please enter the number of minutes John has worked: ";
    cin>>minJohnWorked;

    cout<<endl;

    cout<<"Please enter the number of days Bill has worked: ";
    cin>>daysBillWorked;
    cout<<"Please enter the number of hours Bill has worked: ";
    cin>>hoursBillWorked;
    cout<<"Please enter the number of minutes Bill has worked: ";
    cin>>minBillWorked;

    cout<<endl;

    // working out the minutes to track
    int totalNumMinutes = minJohnWorked + minBillWorked;

    int minutesLeft = totalNumMinutes % minutesInHours;
    int minutesToCarry = totalNumMinutes / minutesInHours;
    // cout<<minutesToCarry;

    int totalHours = hoursBillWorked + hoursJohnWorked + minutesToCarry; // final num of hours

    int hoursLeft = totalHours % hoursInDay; // this is what is left and need to return this figure
    int hoursToCarry = totalHours / hoursInDay;

    int totalDays = daysBillWorked + daysJohnWorked + hoursToCarry; // final num of days

    cout<<"The total time both of them worked together is: "<<totalDays<<" days, "<<hoursLeft<<" hours, and "<<minutesLeft<<" minutes."<<endl; 

    return 0;
}