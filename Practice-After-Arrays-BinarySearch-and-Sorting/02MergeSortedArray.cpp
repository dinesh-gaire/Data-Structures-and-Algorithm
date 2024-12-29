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

void merge(int arr1[], int size1, int arr2[], int size2, int arr3[])
{
    int i = 0, j = 0;
    int k = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {

            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < size1)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while (j < size2)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    printArray(arr3, size1 + size2);
}

int main()
{
    int arr1[5] = {1, 5, 7, 9, 15};
    int arr2[4] = {2, 4, 8, 16};
    int arr3[9];
    merge(arr1, 5, arr2, 4, arr3);
    return 0;
}