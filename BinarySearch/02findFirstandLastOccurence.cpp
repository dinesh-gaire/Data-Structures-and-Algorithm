#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int index;

    while (start <= end)
    {
        int mid = (start + ((end - start) / 2));
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            index = mid;
            end = index - 1;
        }
    }
    return index;
}

int lastOccurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int index;

    while (start <= end)
    {
        int mid = (start + ((end - start) / 2));
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            index = mid;
            start = index + 1;
        }
    }
    return index;
}

int main()
{
    int arr[7] = {0, 1, 1, 1, 1, 2, 2};
    int startIndex = firstOccurence(arr, 7, 1);
    int endIndex = lastOccurence(arr, 7, 1);

    cout << "First Occurence at index: " << startIndex << endl;
    cout << "Last Occurence at index: " << endIndex << endl;

    return 0;
}