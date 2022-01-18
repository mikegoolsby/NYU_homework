#include <iostream>
using namespace std;

int centsDollar = 100;
int nickelsDollar = 5;
int quarterDollar = 25;
int dimeDollar = 10;

int main()
{
    int num_quarters, num_dimes, num_nickels, num_pennies;
    int amtInQuarters, amtInNickles, amtInDimes, amtInPennies;
    int returnDollarAmt, centsRemaining, finalAmtCents;

    cout<<"Please enter number of coins: \n";
    cout<<"# of quarters: ";
    cin>>num_quarters;
    cout<<"# of dimes: ";
    cin>>num_dimes;
    cout<<"# of nickels: ";
    cin>>num_nickels;
    cout<<"# of pennies: ";
    cin>>num_pennies;

    amtInQuarters = num_quarters * quarterDollar;
    amtInDimes = num_dimes * dimeDollar;
    amtInNickles = num_nickels * nickelsDollar;
    amtInPennies = num_pennies;

    finalAmtCents = amtInPennies + amtInNickles + amtInDimes + amtInQuarters;

    centsRemaining = finalAmtCents % centsDollar;

    returnDollarAmt = finalAmtCents / centsDollar;

    cout<<"The total is "<<returnDollarAmt<<" dollars and "<<centsRemaining<<" cents"<<endl;

    return 0;
}