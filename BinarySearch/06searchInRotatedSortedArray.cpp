#include <iostream>
using namespace std;

int searchInRotatedSortedArray(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        // check if arr[mid] lies in sorted left part
        if (arr[mid] >= arr[0])
        {
            // key also lies in sorted left part and key is in left part of mid
            if (key >= arr[0] && key < arr[mid])
            {
                end = mid - 1;
            }
            else
            { // key doesn't lie in left part or key is in right part of mid
                start = mid + 1;
            }
        }
        // check if arr[mid] lies in sorted right part
        else
        {
            // check if key lies in right part and key is also in right part of mid
            if (key < arr[0] && key > arr[mid])
            {
                start = mid + 1;
            }
            else
            { // check if key lies in left part or key lies in left of arr[mid]
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[7] = {6, 7, 9, 15, 19, 2, 3};
    int key = 2;
    int index = searchInRotatedSortedArray(arr, 7, key);
    if (index >= 0)
    {
        cout << "Found in index: " << index << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}
