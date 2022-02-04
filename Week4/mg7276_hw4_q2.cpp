#include <iostream>
#include <string>
using namespace std;



int main()
{
    int decimalNumber, paredNumber, tempVariable;
    string romanM = "";

    cout<<"Enter decimal number: ";
    cin>>decimalNumber;

    tempVariable = decimalNumber;

    // Needed to figure out how many "M" or "V" or "I" to give the string
    romanM = string(decimalNumber/1000, 'M');
    decimalNumber %= 1000;

    // Then, further reduce the decimalNumber by the mod of operator in question
    romanM += string(decimalNumber/500, 'D');
    decimalNumber %= 500;

    romanM += string(decimalNumber/100, 'C');
    decimalNumber %= 100;

    romanM += string(decimalNumber/50, 'L');
    decimalNumber %= 50;

    romanM += string(decimalNumber/10, 'X');
    decimalNumber %= 10;

    romanM += string(decimalNumber/5, 'V');
    decimalNumber %= 5;

    romanM += string(decimalNumber/1, 'I');
    decimalNumber %= 1;

    cout<<tempVariable<<" is "<<romanM<<endl;

    return 0;
}