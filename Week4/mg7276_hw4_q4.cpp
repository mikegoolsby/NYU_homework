#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int sequenceLength, count;
    double tempResult = 1, geometricMean, currNumber;

    bool endOfSequence = false;

    // cout<<"Section A"<<endl;

    // cout<<"Please enter the length of the sequence: ";
    // cin>>sequenceLength;

    // cout<<"Please enter your sequence: ";
    

    // while (count <= sequenceLength)
    // {
    //     cin>>currNumber;
    //     tempResult *= currNumber;
    //     geometricMean = pow(tempResult, (double)1/sequenceLength);
    //     count++;
    // }
    
    // cout<<"The geometric mean is: "<<gemometricMean<<endl;

    cout<<"Section B"<<endl;

    cout<<"Please enter a non-empty sequence of positive integers, \n";
    cout<<"each one in a seperate line. End your sequence by \n";
    cout<<"typing -1: "<<endl;

    while (endOfSequence == false)
    {
        cin>>currNumber;
        if (currNumber == -1)
        {
            endOfSequence = true;
        }
        else
        {
            tempResult = tempResult * currNumber;
            count++;
            geometricMean = pow(tempResult, (float)1/count);
        }
    }

    cout<<"The geometric mean is: "<<geometricMean<<endl;


    return 0;
}