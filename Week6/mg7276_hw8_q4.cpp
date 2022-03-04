#include <iostream>
#include <array>
using namespace std;

// User's pin in a global constant variable
int USER_PIN[5] = {9, 1, 7, 2, 2};
int generatedArr[10];


void generateRandomIdx();
// The above generates a random index of 1, 2, and 3's to correspond to the user's input

bool pinMatches(int USER_PIN, int userEnteredPin);
// The above proves true or false if pins match up. This achieves via index matching


int main()
{

    int userEnteredPin[5];

    cout<<"====Shoulder Surfing Interceptor===="<<endl;
    cout<<"Please enter your PIN according to the following mapping:\n";
    cout<<"You will need to hit Enter after each number.\n";
    cout<<"PIN: 0 1 2 3 4 5 6 7 8 9\n";

    cout<<"NUM: ";
    generateRandomIdx();
    cout<<endl;

    for (int i=0; i<5; i++)
    {
        cin>>userEnteredPin[i];
    }

    cout<<"TODO: this question is incomplete. Cannot figure out how to compare the two pins together."<<endl;

    return 0;
}

void generateRandomIdx()
{

    for (int i=0; i<10; i++)
    {
        generatedArr[i] = rand() % 3 + 1;
    }

    for (int element: generatedArr)
    {
        cout<<element<<" ";
    }
}

// bool pinMatches(int USER_PIN, int userEnteredPin)
// {
//     for (int i=0; i<5; i++)
//     {
//         if (userEnteredPin[i] != USER_PIN[generatedArr[i]])
//     }
// }