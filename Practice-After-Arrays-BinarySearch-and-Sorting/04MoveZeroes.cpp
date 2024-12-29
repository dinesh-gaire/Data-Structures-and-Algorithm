#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// shifting all nonZeroes to the right
void moveZeroes(int arr[], int size)
{
    int nonZero = 0, j = 0;
    while (j < size)
    {
        if (arr[j] != 0)
        {
            swap(arr[nonZero], arr[j]);
            nonZero++;
        }
        j++;
    }

    printArray(arr, size);
}

int main()
{
    int arr[6] = {0, 1, 0, 12, 0, 8};
    moveZeroes(arr, 6);
    return 0;
}