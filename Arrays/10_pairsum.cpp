#include <iostream>

#include <algorithm>
#include <vector>
using namespace std;

/*
void findPairSum(int arr[], int sum, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                if (arr[i] < arr[j])
                {
                    cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
                }
                else
                {
                    cout << "(" << arr[j] << "," << arr[i] << ")" << endl;
                }
            }
        }
    }
}
*/

/*
Time Complexity:
    Sorting the array: O(nlog⁡n)
    Two-pointer traversal: O(n) Thus, the overall time complexity is O(nlog⁡n).
*/
void findPairSum(int arr[], int sum, int size)
{
    // sorting the array
    sort(arr, arr + size);

    int start = 0;
    int end = size - 1;
    bool found=0;
    while (start < end)
    {
        int currentSum = arr[start] + arr[end];
        // if pair sum equals to given sum
        if (currentSum == sum)
        {

            cout << "(" << arr[start] << "," << arr[end] << ")" << endl;

            start++;
            end--;
            found=1;
        }
        else if (currentSum > sum)
        { // if pair sum is greater than sum
            end--;
        }
        else
        { // if pair sum is less
            start++;
        }
    }
    if(!found){
        cout<<"Not Found"<<endl;
    }
}

int main() // 1234567
{
    int arr[7] = {7, 6, 3, 4, 5, 2, 1};
    int sum = 12;
    findPairSum(arr, sum, 7);
    return 0;
}