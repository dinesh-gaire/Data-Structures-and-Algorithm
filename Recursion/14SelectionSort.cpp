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

void selectionSort(int arr[], int length)
{
    // base case -> already sorted
    if (length == 0 || length == 1)
    {
        return;
    }

    int minIndex = 1;
    for (int i = 2; i < length; i++)
    {
        if (arr[minIndex] > arr[i])
        {
            minIndex = i;
        }
    }
    if (arr[0] > arr[minIndex])
    {
        swap(arr[0], arr[minIndex]);
    }
    printArray(arr, length);
    selectionSort(arr + 1, length - 1);
}

int main()
{
    int arr[8] = {5, 1, 3, 2, 9, 7, 6, 4};
    selectionSort(arr, 8);
    cout << "Sorted Array: " << endl;
    printArray(arr, 8);
    return 0;
}