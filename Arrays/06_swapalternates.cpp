#include <iostream>
using namespace std;

void swapAlternates(int arr[], int size)
{
    int start = 0;

    while ((start + 1) < size)
    {
        swap(arr[start], arr[start + 1]);
        start += 2;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};

    swapAlternates(arr, 6);
    printArray(arr, 6);
}