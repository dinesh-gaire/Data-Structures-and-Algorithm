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

void merge(int arr[], int start, int end)
{
    int mid = ((start + end) / 2);

    int size1 = mid - start + 1;
    int size2 = end - mid;

    int *first = new int[size1];
    int *second = new int[size2];

    // copy values
    int k = start;
    for (int i = 0; i < size1; i++)
    {
        first[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for (int i = 0; i < size2; i++)
    {
        second[i] = arr[k];
        k++;
    }

    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    k = start;
    while (index1 < size1 && index2 < size2)
    {
        if (first[index1] < second[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k++] = second[index2++];
        }
    }

    while (index1 < size1)
    {
        arr[k++] = first[index1++];
    }

    while (index2 < size2)
    {
        arr[k++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int arr[], int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }
    int mid = ((start + end) / 2);

    // sort left part
    mergeSort(arr, start, mid);

    // sort right part
    mergeSort(arr, mid + 1, end);

    // merge
    merge(arr, start, end);
}

int main()
{
    int arr[8] = {5, 1, 3, 2, 9, 7, 6, 4};
    mergeSort(arr, 0, 7);
    cout << "Sorted Array: " << endl;
    printArray(arr, 8);
    return 0;
}