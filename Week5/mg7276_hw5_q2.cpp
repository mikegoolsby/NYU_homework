#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int x1, x2, x3, x4;

    srand(time(0));

    x1 = rand();
    x2 = rand();
    x3 = rand() % 100;
    x4 = (rand() % 100) + 1; //this final variable is essentially the random number we're guessing

    // cout<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<endl;

    // initializing the vars we need
    int userGuess, count = 5, guesses = 0;
    int lowerBound = 1, upperBound = 100; //our lower bound will always be 1, upper will always be 100

    cout<<"I thought of a number between 1 and 100! Try to guess it."<<endl;
    
    while (count >= 1) // while we still have guesses left
    {
        cout<<"Range: ["<<lowerBound<<", "<<upperBound<<"], Number of guesses left: "<<count<<endl;
        cout<<"Your guess: ";
        cin>>userGuess;
        count--; // decrement each time we take a guess
        if (userGuess == x4) // case if we guess the number
        {
            
            guesses++;
            cout<<"Congrats! You guessed my number in "<<guesses<<" guesses.";
            break;
        }
        else if (x4 > userGuess) // case if our guess is smaller
        {
            guesses++;
            lowerBound = userGuess;
            if (count == 0) //if we happen to run out of guesses
            {
                cout<<"Out of guesses! My number is "<<x4<<endl;
                break;
            }
            cout<<"Wrong! My number is bigger."<<endl;
        }
        else if (x4 < userGuess) //case if our guess is bigger
        {
            guesses++;
            upperBound = userGuess;
            if (count == 0) // if we happen to run out of guesses
            {
                cout<<"Out of guesses! My number is "<<x4<<endl;
                break;
            }
            cout<<"Wrong! My number is smaller."<<endl;
        }
    }

    return 0;
}