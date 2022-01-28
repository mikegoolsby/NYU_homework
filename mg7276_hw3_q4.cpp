#include <iostream>
using namespace std;

const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;

int main()
{
    double userInput, remainderToTest;
    int roundSelection, temp;

    cout<<"Please enter a Real number: ";
    cin>>userInput;

    cout<<"Choose your rounding method: \n";
    cout<<"1. Floor round\n";
    cout<<"2. Ceiling round\n";
    cout<<"3. Round to the nearest whole number\n";
    cin>>roundSelection;

    switch (roundSelection)
    {
    case FLOOR_ROUND:
        userInput = (int)userInput / 1;
        cout<<userInput;
        break;
    case CEILING_ROUND:
        userInput = ((int)userInput / 1) + 1;
        cout<<userInput;
        break;
    case ROUND:
        temp = (int)userInput % 10;
        remainderToTest = userInput - temp;
        if(1 - remainderToTest < .50)
        {
            temp++;
        }
        else
        {
            temp;
        }
        cout<<temp;
        break;
    default:
        cout<<"Not a valid choice. Try again.";
    }

    // cout<<"user chose "<<roundSelection<<endl;

    return 0;
}