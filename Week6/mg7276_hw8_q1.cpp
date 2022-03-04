#include <iostream>
using namespace std;

const int arrSize = 20;

int minInArray(int arr[], int arrSize);
// this function is given arr, an array of integers, and its size, arrsize.
// when called, it returns the smallest value in arr.

void indexCapture(int arr[], int arrSize, int min);
// Captures our index of the minimum integer

int main()
{
    int num, minimum, index;
    int arr[arrSize];

    cout<<"====INTEGER MODIFICATIONS===="<<endl;
    cout<<"Please enter 20 integers seperated by a space: "<<endl;
    for (int i = 0; i<arrSize; i++)
    {
        cin>>arr[i];
    }

    minimum = minInArray(arr, arrSize);

    cout<<"\nThe minimum value in your array is: "<<minimum<<endl;
    cout<<"\nIt is located in the following indices: "<<endl;

    indexCapture(arr, arrSize, minimum);

    return 0;
}

int minInArray(int arr[], int arrSize)
{
    int min = 999999;
    for (int i = 0; i<arrSize; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

void indexCapture(int arr[], int arrSize, int min)
{
    for (int i=0; i<arrSize; i++)
    {
        if (arr[i] == min)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}