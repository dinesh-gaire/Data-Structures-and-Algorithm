#include <iostream>
using namespace std;

int getSum(int arr[], int size)
{
    // base case
    if (size == 0)
        return 0;

    return arr[0] + getSum(arr + 1, size - 1);
}

int main()
{
    int arr[3] = {1, 2, 3};
    int size = 3;
    cout << getSum(arr, size);
    cout << endl;
    return 0;
}