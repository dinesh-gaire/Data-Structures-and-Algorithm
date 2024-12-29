#include <iostream>
using namespace std;

bool checkIfRotatedAndSorted(int arr[], int size)
{
    int pair = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            pair++;
        };
    }
    if (arr[size - 1] > arr[0])
    {
        pair++;
    }
    return pair<=1;
}

int main()
{
    int arr[6] = {1, 1, 1, 1, 1, 1};
    checkIfRotatedAndSorted(arr, 6) ? cout<<"Yes it is" : cout<<"No it is not";
    cout<<endl;
    return 0;
}