#include <iostream>
#include <string>
using namespace std;

const int ALPHABET = 26;
int alphabet[26] = {0};
int wordCount = 0;

void updateLWCount(int arr[], int wordCount, string userInput);

void printLetterFreq(int arr[]);

int main()
{
    string userInput;
    cout<<"Please enter a line of text: "<<endl;

    getline(cin, userInput);

    // commented for debugging
    // cout<<userInput<<endl;
    
    updateLWCount(alphabet, wordCount, userInput);

    printLetterFreq(alphabet);

    return 0;
}

void updateLWCount(int arr[], int wordCount, string userInput)
{
    for (int i = 0; i<userInput.length(); i++)
    {
        if (((userInput[i] >= 'A' && userInput[i] <= 'Z') || (userInput[i] >= 'a' && userInput[i] <= 'z')) && (userInput[i + 1] == ' ' || userInput[i + 1] == ',' || userInput[i + 1] == '.'))
        {
            wordCount++;
        }
        if (userInput[i] >= 'A' && userInput[i] <= 'Z')
        {
            arr[userInput[i] - 'A']++;
        }
        if (userInput[i] >= 'a' && userInput[i] <= 'z')
        {
            arr[userInput[i] - 'a']++;
        }
    }
}


void printLetterFreq(int arr[])
{
    for (int i = 0; i<ALPHABET; i++)
    {
        if (arr[i] > 0)
        {
            cout<<arr[i]<<"\t"<<(char)('a' + i)<<endl;
        }
    }
}