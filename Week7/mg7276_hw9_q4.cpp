#include <iostream>
using namespace std;

void oddsKeepEvensFlip(int arr[], int arrSize);

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};

    cout<<"===BEFORE RUNNING VOID FUNC==="<<endl;

    for (int i = 0; i<9; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;

    oddsKeepEvensFlip(arr, 9);

    cout<<"===AFTER RUNNING VOID FUNC==="<<endl;

    for (int i = 0; i<9; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;

    return 0;
}

void oddsKeepEvensFlip(int arr[], int arrSize)
{
    int* tempArr;
    tempArr = new int[arrSize];
    int index = 0;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] % 2 == 1)
        {
            tempArr[index++] = arr[i];
        }
    }

    for (int i = arrSize; i>=0; i--)
    {
        if (arr[i] % 2 == 0)
        {
            tempArr[index++] = arr[i];
        }
    }

    for (int i = 0; i<arrSize; i++)
    {
        arr[i] = tempArr[i];
    }

    delete [] tempArr;
    tempArr = arr; //REMEMBER TO RE-POINT POINTER, CPP DOESNT HAVE GARBAGE COLLECTION
} 