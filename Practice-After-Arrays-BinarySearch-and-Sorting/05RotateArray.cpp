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
void rotateArray(int arr[], int size, int k)
{
    int temp[size];
    // shifting in cyclic way
    for (int i = 0; i < size; i++)
    {
        temp[(i + k) % size] = arr[i];
    }

    printArray(temp, size);
}

int main()
{
    int arr[6] = {5, 1, 3, 12, 2, 8};
    int k = 3;
    rotateArray(arr, 6, k);
    return 0;
}