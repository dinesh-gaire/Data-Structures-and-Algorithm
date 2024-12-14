#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    cout << "Printing reverse array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[6] = {1, 2, 3, 4, 5, 6};

    reverse(arr1, 5);
    reverse(arr2, 6);

    printArray(arr1, 5);
    printArray(arr2, 6);
    return 0;
}