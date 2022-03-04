#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first, middle, last;
    string middle_init;
    string full_name;

    cout<<"====NAME FORMATTER===="<<endl;
    cout<<"Please enter first, middle, and last name: "<<endl;

    cin>>first>>middle>>last;

    middle_init = middle.substr(0, 1) + ".";

    if (middle == middle_init)
    {
        full_name = last + ", " + first + " " + middle;
    }
    else
    {
        full_name = last + ", " + first + " " + middle_init;
    }

    cout<<full_name<<endl;

    return 0;
}