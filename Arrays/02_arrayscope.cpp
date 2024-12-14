#include <iostream>
using namespace std;

void update(int arr[], int size)
{
    arr[0] = 40;

    cout << "Inside the function..." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Exit from function..." << endl;
}

int main()
{
    int arr[3] = {1, 2, 3};

    update(arr, 3);

    cout << "Printing inside main function" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}