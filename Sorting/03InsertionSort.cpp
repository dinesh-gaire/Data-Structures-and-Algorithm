#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
    printArray(arr, 7);
}

int main()
{
    int arr[7] = {10, 1, 7, 4, 8, 2, 11};
    insertionSort(arr, 7);
    return 0;
}

//TC: worst case: O(n^2) best case(already sorted): O(n)
//SC: O(1)