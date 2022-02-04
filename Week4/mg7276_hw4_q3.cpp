#include <iostream>
#include <string>
using namespace std;

int main()
{
    int decimalInput, tempVariable, remainder;
    string baseTwoOutput = "";

    // Capturing user input
    cout<<"Enter decimal number: "<<endl;
    cin>>decimalInput;

    tempVariable = decimalInput;

    while (decimalInput > 0)
    {
        remainder = decimalInput % 2;
        baseTwoOutput = to_string(remainder) + baseTwoOutput;
        decimalInput /= 2;
    }



    // Displaying output after logic
    cout<<"The binary representation of "<<tempVariable<<" is "<<baseTwoOutput<<endl;

    return 0;
}