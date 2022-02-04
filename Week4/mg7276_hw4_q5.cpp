#include <iostream>
using namespace std;

int main()
{
    int userInput, line, count;

    cout<<"Please enter a positive integer: ";
    cin>>userInput;

    for (line = userInput; line > 0; line--)
    {
        for (count = userInput; line < count; count--)
        {
            cout<<" ";
        }
        for (count = 1; line > count; count++)
        {
            cout<<"*";
        }
        for (count = 0; line > count; count++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for (line = 0; line < userInput; line++)
    {
        for (count = 0; count< (userInput - (line + 1)); count++)
        {
            cout<<" ";
        }
        for (count = 1; count <= (2 * line) + 1; count++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}