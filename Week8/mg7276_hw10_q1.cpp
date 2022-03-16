#include <iostream>
#include <string>
#include <vector>
using namespace std;

string* createWordsArray(string sentence, int& outWordsArrSize);



int main()
{
    string sentence;
    string* words;
    int outWordsArrSize = 0;

    cout<<"====CONVERT USER SENTENCE INTO AN ARRAY===="<<endl;
    cout<<"Please enter a sentence: ";

    getline(cin, sentence);

    cout<<endl;

    words = createWordsArray(sentence, outWordsArrSize);

    for (int i = 0; i < outWordsArrSize; i++)
    {
        cout<<words[i]<<endl;
    }
    cout<<endl;
    cout<<"Array is "<<outWordsArrSize<<" elements long"<<endl;

    // cout<<sentence<<endl;

    return 0;
}

string* createWordsArray(string sentence, int& outWordsArrSize)
{
    for (int i = 0; i<sentence.length(); i++)
    {
        if (sentence[i] == ' ')
        {
            outWordsArrSize++;
        }
    }
    outWordsArrSize++;

    string* words = new string[outWordsArrSize];
    int counter = 0;

    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == ' ')
        {
            counter++;
            i++;
        }
        words[counter] += sentence[i];
    }

    return words;
}