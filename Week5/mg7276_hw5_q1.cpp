#include <iostream>
using namespace std;

int main()
{
    int userInput;

    // Capturing user input
    cout<<"Please enter a positive integer: "<<endl;
    cin>>userInput;

    // Nested loops to multiply each number to produce a matrix
    for (int i = 1; i <= userInput; i++)
    {
        for (int j = 1; j <= userInput; j++)
        {
            cout<<j*i<<"\t";
        }
        cout<<endl;
    }

    return 0;
}