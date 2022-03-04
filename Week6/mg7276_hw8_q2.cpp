#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str);
// given a string str containing a word, returns true if and only if
// str is a palindrome

int main()
{
    string str;

    cout<<"Please enter a word: ";
    cin>>str;

    isPalindrome(str);

    return 0;
}

bool isPalindrome(string str)
{
    bool check = false;

    long strLength = str.length();

    for (int i = 0; i<strLength; i++)
    {
        if (str[i] == str[strLength - i - 1])
        {
            check = true;
        }
        else
        {
            check = false;
            break;
        }
    }

    if (check == true)
    {
        cout<<str<<" is a palindrome\n";
    }
    else
    {
        cout<<str<<" is not a palindrome\n";
    }

    return check;
}