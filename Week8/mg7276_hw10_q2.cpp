#include <iostream>
using namespace std;

int* findMissing(int arr[], int n, int& resArrSize);

int main()
{
    int arr[6] = {3, 1, 3, 0, 6, 4};
    int resArrSize = 0;

    int* missingNumArray = findMissing(arr, 6, resArrSize);

    for (int i = 0; i<resArrSize; i++)
    {
        cout<<missingNumArray[i]<<"\n";
    }

    cout<<endl;

    return 0;
}

int* findMissing(int arr[], int n, int& resArrSize)
{
    resArrSize = n;
    int* temporaryArray = new int[n];
    int* responseArray = new int[resArrSize];

    for (int i = 0; i <= n; i++)
    {
        temporaryArray[i] = i + 1;
    }

    for (int i = 0; i<n; i++)
    {
        if (temporaryArray[arr[i] - 1] == arr[i])
        {
            temporaryArray[arr[i] - 1] = -1;
            resArrSize--;
        }
    }

    int isMissing = 0;

    for (int i = 0; i<n; i++)
    {
        if (temporaryArray[i] > 0)
        {
            responseArray[isMissing] = temporaryArray[i];
            isMissing++;
        }
    }

    resArrSize = isMissing;

    return responseArray;
}