#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < (size - 1); i++)
    {
        int minIndex = i + 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if (arr[i] > arr[minIndex])
        {
            swap(arr[i], arr[minIndex]);
        }
    }
    printArray(arr, 7);
}

int main()
{
    int arr[7] = {1, 7, 9, 2, 3, 0, 5};
    selectionSort(arr, 7);
    return 0;
}

//TC: worst case: O(n^2) best case(already sorted): O(n)
//SC: O(1)