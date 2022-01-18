#include <iostream>
using namespace std;

int centsDollar = 100;
int nickelsDollar = 5;
int quarterDollar = 25;
int dimeDollar = 10;

int main() 
{
    int dollarInput, centInput;
    int dollarsInCents, totalCents;
    int amtInQuarters, amtInDimes, amtInNickels, amtInPennies;

    cout<<"Please enter your amount in the format of dollars and cents separated by a space:"<<endl;
    cin>>dollarInput>>centInput;

    cout<<dollarInput<<" and "<<centInput<<" cents are:"<<endl;

    dollarsInCents = dollarInput * centsDollar;

    totalCents = dollarsInCents + centInput;

    amtInQuarters = totalCents / quarterDollar;
    totalCents = totalCents - amtInQuarters * quarterDollar;

    amtInDimes = totalCents / dimeDollar;
    totalCents = totalCents - amtInDimes * dimeDollar;

    amtInNickels = totalCents / nickelsDollar;
    totalCents = totalCents - amtInNickels * nickelsDollar; 

    amtInPennies = totalCents; 

    cout<<amtInQuarters<<" quarters, "<<amtInDimes<<" dimes, "<<amtInNickels<<" nickels, and "<<amtInPennies<<" pennies";

    return 0;
}