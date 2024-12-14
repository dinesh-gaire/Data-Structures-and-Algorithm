#include <iostream>
using namespace std;

/*
void findDuplicate(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if(arr[i]==arr[j]){
                count+=1;
            }
        }
        if(count>1){
            cout<<"duplicate element is: "<<arr[i];
            break;
        }
    }

}
*/

bool findDuplicate(int arr[], int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result = result ^ arr[i];
    }
    for (int i = 1; i < size; i++)
    {
        result = result ^ i;
    }
    cout << result;
    if (result)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 3};
    cout << findDuplicate(arr, 5);
    return 0;
}