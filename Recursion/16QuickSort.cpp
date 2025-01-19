#include <iostream>
using namespace std;

void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] < pivot)
            count++;
    }
    int pivotIndex = start + count;

    swap(arr[start], arr[pivotIndex]);

    int i = start;
    int j = end;
    while (i < pivotIndex && j > pivotIndex)
    {
        if (arr[i] > arr[pivotIndex] && arr[j] < arr[pivotIndex])
        {
            swap(arr[i++], arr[j--]);
        }

        if (arr[i] <= arr[pivotIndex])
        {
            i++;
        }

        if (arr[j] >= arr[pivotIndex])
        {
            j--;
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }

    // partition
    int p = partition(arr, start, end);

    // left part
    quickSort(arr, start, p - 1);

    // right part
    quickSort(arr, p + 1, end);
}

int main()
{
    int arr[8] = {5, 1, 3, 2, 9, 7, 6, 4};
    quickSort(arr, 0, 7);
    cout << "Sorted Array: " << endl;
    printArray(arr, 8);
    return 0;
}