#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key, int index)
{
    // base case
    if (size == 0)
        return -1;

    if (arr[0] == key)
    {
        return index;
    }
    else
    {
        return linearSearch(arr + 1, size - 1, key, index + 1);
    }
}

int main()
{
    int arr[3] = {1, 2, 3};
    int size = 3;
    int key = 4;
    int index = linearSearch(arr, size, key, 0);
    if (index >= 0)
    {
        cout << "Found in index: " << index;
    }
    else
    {
        cout << "Not found";
    }
    cout << endl;
    return 0;
}