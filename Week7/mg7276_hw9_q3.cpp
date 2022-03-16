#include <iostream>
using namespace std;

int* getPosNums1(int* arr, int arrSize, int& outPosArrSize);

int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr);

void getPosNums3(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize);

void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr);

void printArrayValue(int* arr,int arrSize);


int main()
{
    int arr[] = {-4, -1, -5, 0, 3, 5, 7};
    int arrSize = 7;
    int outPosArrSize;
    int* result;

    cout<<"====FUNC 1====\n";
    result = getPosNums1(arr, arrSize, outPosArrSize);
    printArrayValue(result, outPosArrSize);

    cout<<"====FUNC 2====\n";
    result = getPosNums2(arr, arrSize, &outPosArrSize);
    printArrayValue(result, outPosArrSize);

    cout<<"====FUNC 3====\n";
    getPosNums3(arr, arrSize, result, outPosArrSize);
    printArrayValue(result, outPosArrSize);

    cout<<"====FUNC 4====\n";
    getPosNums4(arr, arrSize, &result, &outPosArrSize);
    printArrayValue(result, outPosArrSize);

    return 0;
}

// ****Function definitions****
int* getPosNums1(int* arr, int arrSize, int& outPosArrSize)
{
    outPosArrSize = 0;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > 0)
        {
            outPosArrSize++;
        }
    }
    
    int* outPosArr = new int[outPosArrSize];
    int j = 0;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > 0)
        {
            outPosArr[j++] = arr[i];
        }
    }

    return outPosArr;
    
}

int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr)
{
    *outPosArrSizePtr = 0;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > 0)
        {
            (*outPosArrSizePtr)++;
        }
    }

    int *outPosArr = new int[(*outPosArrSizePtr)];
    int j = 0;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > 0)
        {
            outPosArr[j++] = arr[i];
        }
    }
    
    return outPosArr;
    
}

void getPosNums3(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize)
{
    outPosArrSize = 0;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > 0)
        {
            outPosArrSize++;
        }
    }
    
    outPosArr = new int[outPosArrSize];

    int j = 0;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > 0)
        {
            outPosArr[j++] = arr[i];
        }
        
    }
    
}

void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr)
{
    *outPosArrSizePtr = 0;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > 0)
        {
            (*outPosArrSizePtr)++;
        }
    }

    (*outPosArrPtr) = new int[(*outPosArrSizePtr)];

    int j = 0;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > 0)
        {
            (*outPosArrPtr)[j++] = arr[i];
        }
        
    }
    
    
}

void printArrayValue(int* arr,int arrSize)
{
    
    cout<<"New positive nums array: ";
    
    for (int i = 0; i < arrSize; i++)
    {
        cout<<arr[i]<<" ";
    }
        
    cout<<endl<<endl;
}