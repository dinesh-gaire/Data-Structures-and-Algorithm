#include <iostream>
using namespace std;

int min(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int max(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[5] = {50, 4, -6, 90, 9};

    int min_num = min(arr, 5);
    int max_num = max(arr, 5);

    cout << "Minimum inside aray: " << min_num << endl;
    cout << "Maximum inside aray: " << max_num << endl;
    return 0;
}