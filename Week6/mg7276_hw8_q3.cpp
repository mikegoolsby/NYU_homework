#include <iostream>
using namespace std;

void reverseArray(int arr[], int arrSize);
// array of int and its size
// reorders the elements to appear in reverse order 

void removeOdd(int arr[], int& arrSize);
// takes an array of int, its size, and removes all odd elements

void splitParity(int arr[], int arrSize);
// takes an array of ints, its size, and changes order so that
// all odd numbers will appear first, and all even nums will appear last

void printArray(int arr[], int arrSize);
// prints array

int main()
{
    cout<<"====THREE FUNCTIONS TO IMPLEMENT ON ARRAYS===="<<endl;
    int arr1[10] = {9, 2, 14, 12, -3};
    int arr1Size = 5;

    int arr2[10] = {21, 12, 6, 7, 14};
    int arr2Size = 5;

    int arr3[10] = {3, 6, 4, 1, 12};
    int arr3Size = 5;

    reverseArray(arr1, arr1Size);
    printArray(arr1, arr1Size);

    removeOdd(arr2, arr2Size);
    printArray(arr2, arr2Size);

    // splitParity(arr3, arr3Size);
    // printArray(arr3, arr3Size);

    return 0;
}

void reverseArray(int arr[], int arrSize)
{
    int temp, first, last = arrSize - 1;

    for (first=0; first< (arrSize - 1) / 2; first++, last--)
    {
        temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
    }
}

void removeOdd(int arr[], int& arrSize)
{
    int updatedSize = 0;

    for (int i=0; i < arrSize; i++)
    {
        if (arr[i] % 2 != 0)
        {
            arr[i] = arr[i + 1];
            updatedSize++;
        }
    }
    arrSize = updatedSize;
}


void printArray(int arr[], int arrSize)
{
    for (int i=0; i < arrSize; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}