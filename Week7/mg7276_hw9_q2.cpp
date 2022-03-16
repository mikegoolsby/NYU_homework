#include <iostream>
using namespace std;

bool checkPalindrome(string word);

int main ()
{

    string word;

    cout<<"Please enter a word to check whether or not it is a palindrome: ";
    cin>>word;

    checkPalindrome(word);


    return 0;
}

bool checkPalindrome(string word)
{
    bool isPalindrome = false;

    long wordLength = word.size();

    for (int i = 0; i<wordLength; i++)
    {
        if (word[i] == word[wordLength - i - 1])
        {
            isPalindrome = true;
        }
        else
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome == false)
    {
        cout<<word<<" is not a palindrome!"<<endl;
    }
    else
    {
        cout<<word<<" is a palindrome!"<<endl;
    }

    return isPalindrome;
}