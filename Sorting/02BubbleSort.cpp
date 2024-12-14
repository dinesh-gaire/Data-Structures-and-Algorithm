#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        bool swapped = false;
        for (int j = 0; j < size-i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j+1]);
                swapped=true;
            }
        }
        if(swapped=false){
            break;
        }
    }
    printArray(arr, 7);
}

int main()
{
    int arr[7] = {1, 7, 9, 2, 3, 0, 5};
    bubbleSort(arr, 7);
    return 0;
}

//TC: worst case: O(n^2) best case(already sorted): O(n)
//SC: O(1)