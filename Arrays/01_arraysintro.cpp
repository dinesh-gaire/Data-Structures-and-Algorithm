#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing the array..." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Printing completed" << endl;
}

int main()
{
    int num[5] = {1, 2, 3, 4, 5};
    printArray(num, 5); // 1 2 3 4 5

    int arr1[5] = {1, 2};
    printArray(arr1, 5); // 1 2 0 0 0

    int arr2[5];
    fill_n(arr2, 5, 1);
    printArray(arr2, 5); // 1 1 1 1 1

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << endl;
    cout << ch[3];

    return 0;
}