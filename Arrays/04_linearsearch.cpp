#include <iostream>
using namespace std;

bool linear_search(int arr[], int key, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int key;
    cout << "Enter the number to search: ";
    cin >> key;

    int arr[5] = {1, 2, 3, 4, 5};
    bool found = linear_search(arr, key, 5);
    if (found)
    {
        cout << "Key is present";
    }
    else
    {
        cout << "Key is absent";
    }
    return 0;
}