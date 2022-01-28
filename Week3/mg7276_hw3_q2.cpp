#include <iostream>
#include <string>
using namespace std;

int main()
{
    // initialize variables
    string studentName;
    int graduationYear, currentYear;


    // capture input
    cout<<"Please enter your name: ";
    cin>>studentName;
    cout<<"Please enter your graduation year: ";
    cin>>graduationYear;
    cout<<"Please enter current year: ";
    cin>>currentYear;

    // logic to determine what to print based on inputs
    if(graduationYear <= currentYear)
    {
        cout<<studentName<<", you are graduated.";
    }
    else if(graduationYear - currentYear == 4)
    {
        cout<<studentName<<", you are a freshman.";
    }
    else if(graduationYear - currentYear > 4)
    {
        cout<<studentName<<", you are not in college yet.";
    }
    else // if above 'base' cases fail, we go into class levels below
    {
        if(graduationYear - currentYear == 3)
        {
            cout<<studentName<<", you are a sophomore.";
        }
        else if(graduationYear - currentYear == 2)
        {
            cout<<studentName<<", you are a junior.";
        }
        else if(graduationYear - currentYear == 1)
        {
            cout<<studentName<<", you are a senior.";
        }
    }

    return 0;
}