#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userInput;
    
    cout<<"====TEXT REPLACEMENT===="<<endl;
    cout<<"Please enter a line of text: "<<endl;

    getline(cin, userInput);
    cout<<endl;

    for (int i = 0; i<userInput.size(); i++)
    {
        switch (userInput[i])
        {
        case '0':
            userInput[i] = 'x';
            continue;
        case '1':
            userInput[i] = 'x';
            continue;
        case '2':
            userInput[i] = 'x';
            continue;
        case '3':
            userInput[i] = 'x';
            continue;
        case '4':
            userInput[i] = 'x';
            continue;
        case '5':
            userInput[i] = 'x';
            continue;
        case '6':
            userInput[i] = 'x';
            continue;
        case '7':
            userInput[i] = 'x';
            continue;
        case '8':
            userInput[i] = 'x';
            continue;
        case '9':
            userInput[i] = 'x';
            continue;
        default:
            continue;
        }
    }

    cout<<userInput<<endl;

    return 0;
}