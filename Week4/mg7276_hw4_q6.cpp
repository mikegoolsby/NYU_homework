#include <iostream>
using namespace std;

int main()
{
    int countOfEvens, countOfOdds, num, remainder, originalNumber;
    bool loopValue;

    // Capture user input
    cout<<"Please enter a positive, even integer: ";
    cin>>num;

    originalNumber = num;
    
    // init loop value
    loopValue = false;

    // Loop up to original value
    for (int i = 1; i < originalNumber; i++)
    {
        // if even
        if (i % 2 == 0)
        {
            countOfEvens = 0;
            countOfOdds = 0;
            while (loopValue == false)
            {
                remainder = num % 10;
                if (remainder % 2 == 0) // if remainder even
                {
                    countOfEvens += 1; //incrememnt
                    if (countOfEvens > 10)
                    {
                        loopValue = true;
                    }
                }
                else
                {
                    countOfOdds += 1;
                    if (countOfOdds >= countOfEvens)
                    {
                        break; 
                    }
                }
                num = i / 10;
            }

            loopValue = false; //resetting loop

            if (countOfEvens > countOfOdds)
            {
                cout<<i<<endl;
            }
            num = originalNumber;
        }
    }

    return 0;
}