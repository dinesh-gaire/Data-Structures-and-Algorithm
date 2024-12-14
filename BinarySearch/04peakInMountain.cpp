#include <iostream>
using namespace std;

int findPeakValueOfMountain(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int mid = (start + ((end - start) / 2));
        if (arr[mid] < arr[mid + 1])
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
    int arr[5] = {0, 1, 3, 4, 1};
    int peakValueIndex = findPeakValueOfMountain(arr, 5);
    cout << "Peak value is in index : " << peakValueIndex << endl;
    cout << "Peak value is : " << arr[peakValueIndex] << endl;

    return 0;
}