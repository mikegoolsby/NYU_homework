#include <iostream>
using namespace std;

int main()
{
    int userInput, counter, toPrint = 1;

    // Accepting user input
    cout<<"Please enter a positive integer: ";
    cin>>userInput;

    // Defines section A of the assignment, a while loop
    cout<<"section a"<<endl;

    while (counter < userInput) // While the counter is less than the user's input
    {
        if (toPrint % 2 == 0) // If the value to print is even
        {
            cout<<toPrint<<endl;
            toPrint++;
            counter++;
        }
        else
        {
            toPrint++;
        }
    }

    // Defines section B of the assignment, a for loop
    cout<<"section b"<<endl;

    int counterB, toPrintB = 1;
    int threshold = userInput * 2; // Introduces threshold, because n even integers will always be n * 2 of the input

    for (counterB = 0; counterB <= threshold; counterB++) // while counter is less than or equal to threshold
    {
        if (toPrintB % 2 == 0)
        {
            cout<<toPrintB<<endl;
            toPrintB++;
        }
        else
        {
            toPrintB++;
        }
    }


    return 0;
}