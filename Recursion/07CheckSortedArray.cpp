#include <iostream>
using namespace std;

bool checkSortedArray(int arr[], int size)
{
    // base case
    if (size == 0 || size == 1)
        return true;

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return checkSortedArray(arr + 1, size - 1);
    }
}

int main()
{
    int arr[5] = {1, 8, 7, 8, 9};
    int size = 5;
    checkSortedArray(arr, size) ? cout << "Sorted" : cout << "Not Sorted";
    cout << endl;
    return 0;
}