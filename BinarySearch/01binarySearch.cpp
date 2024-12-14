#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

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
            return mid;
        }
    }
    return -1;
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int index = binarySearch(arr, 7, 10);
    if (index >= 0)
    {
        cout << "Found at index: " << index << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}