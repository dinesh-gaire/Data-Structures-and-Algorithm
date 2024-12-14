#include <iostream>
using namespace std;

/*
void findUnique(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        int occurence = 0;
        for (int j = 0; j < size; j++)
        {
            if(arr[i] == arr[j]){
                occurence+=1;
            }
        }
        if(occurence==1){
            cout<<"unique is: "<<arr[i];
        }

    }

}
*/

void findUnique(int arr[], int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result = result ^ arr[i];
    }
    cout << "Unique Element is: " << result;
}

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 4, 3, 2, 1};

    findUnique(arr, 9);
    return 0;
}