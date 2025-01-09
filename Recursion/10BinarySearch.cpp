#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key)
{
    if (start > end)
    {
        return -1;
    }

    int mid = (start + end) / 2;

    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, end, key);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, key);
    }
}

int main()
{
    int arr[3] = {1, 2, 3};
    int size = 3;
    int key = 1;
    int index = binarySearch(arr, 0, size - 1, key);
    if (index >= 0)
    {
        cout << "Found in index: " << index;
    }
    else
    {
        cout << "Not found";
    }
    cout << endl;
    return 0;
}