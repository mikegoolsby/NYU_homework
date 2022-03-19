#include <iostream>
#include <vector>

using namespace std;

string* main1(int& outLinesArrSize);
vector<string> main2();

int main ()
{

    string* linesArr;
    int linesArrSize;
    vector<string> linesVector;
    

    //linesArr = main1(linesArrSize);
    linesVector = main2();
    
    string searchNum;
    
    /*
    cout<<"Please enter a number you want to search.\n";
    cin>>searchNum;
    
    cout<<"V1:\n"
        <<searchNum<<" shows in lines: ";
    
    for (int i = 0; i < linesArrSize; i++) {
        if (linesArr[i] == searchNum)
        {
            cout<<i + 1<<", ";
        }
        else
        {
            cout<<" ";
        }
    }
    
    cout<<endl;
    */
    
    cout<<"Please enter a number you want to search.\n";
    cin>>searchNum;
    
    cout<<"V2:\n"
        <<searchNum<<" shows in lines: ";
    
    for (int i = 0; i < linesVector.size(); i++)
    {
        if (linesVector[i] == searchNum)
        {
            cout<<i + 1<<" ";
        }
            
        else
        {
            cout<<" ";
        }
            
    }
    
    cout<<endl;
    
    return 0;
}

string* main1(int& outLinesArrSize)
{
    string* lines;
    int linesSize = 0;
    bool seenEndOfSequence = false;
    string currLine;
    
    lines = new string[linesSize];
    
    cout<<"Version A:\n";
    cout<<"Please enter a sequence of positive integers, each in a separate line.\n"
        <<"End your input by typing -1.\n";
    
    while (seenEndOfSequence == false)
    {
        getline(cin, currLine);
        if (currLine == "-1")
        {
            seenEndOfSequence = true;
        } 
            
        else
        {
            lines[linesSize] = currLine; 
            linesSize++;

            string* newLines;
            newLines = new string[linesSize];

            for (int i = 0; i < linesSize; i++)
            {
                newLines[i] = lines[i];
            }

            delete [] lines;
            lines = newLines;
        }
    }
    
    outLinesArrSize = linesSize;
    
    return lines;
}

vector<string> main2()
{
    
    vector<string> lines; 
    bool seenEndOfSequence = false; 
    string currLine; 
    
    cout<<"Version B:\n";
    cout<<"Please enter a sequence of positive integers, each in a separate line.\n"
        <<"End your input by typing -1.\n";
    
    while (seenEndOfSequence == false)
    {
        getline(cin, currLine);
        if (currLine == "-1")
        {
            seenEndOfSequence = true;
        }
        else
        {
            lines.push_back(currLine);
        }
    }
    return lines;
}