#include <iostream>
using namespace std;

int findPivotValueInArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}

int main()
{
    int arr[7] = {6, 7, 9, 15, 19, 2, 3};
    int pivotValueIndex = findPivotValueInArray(arr, 7);
    cout << "Pivot value is in index: " << pivotValueIndex << endl;
    cout << "Pivot value is: " << arr[pivotValueIndex] << endl;

    return 0;
}
