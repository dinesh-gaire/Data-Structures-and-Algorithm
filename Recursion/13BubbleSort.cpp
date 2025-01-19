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

void bubbleSort(int arr[], int length)
{
    // base case -> already sorted
    if (length == 0 || length == 1)
    {
        return;
    }

    for (int i = 0; i < length - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
        printArray(arr, length);
    }
    bubbleSort(arr, length - 1);
}

int main()
{
    int arr[8] = {5, 1, 3, 2, 9, 7, 6, 4};
    bubbleSort(arr, 8);
    cout << "Sorted Array: " << endl;
    printArray(arr, 8);
    return 0;
}