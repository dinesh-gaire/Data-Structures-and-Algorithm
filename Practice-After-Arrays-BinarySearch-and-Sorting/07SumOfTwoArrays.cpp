#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> ans, int size)
{
    int i = 0, j = size - 1;
    while (i < j)
    {
        swap(ans[i++], ans[j++]);
    }
    return ans;
}

void printArray(vector<int> ans, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

void sum(vector<int> arr1, int size1, vector<int> arr2, int size2)
{
    vector<int> ans;
    int sum = 0;
    int carry = 0;
    int i = size1 - 1;
    int j = size2 - 1;
    while (i >= 0 && j >= 0)
    {
        sum = arr1[i] + arr2[j] + carry;
        carry = 0;
        if (sum > 9)
        {
            carry = sum / 10;
            sum = sum % 10;
        }
        ans.push_back(sum);
        i--;
        j--;
    }
    while (i >= 0)
    {
        sum = arr1[i] + carry;
        ans.push_back(sum);
        carry = 0;
        i--;
    }
    while (j >= 0)
    {
        int sum = arr2[j] + carry;
        ans.push_back(sum);
        carry = 0;
        j--;
    }
    if (carry)
    {
        arr1.push_back(carry);
    }
    int size = ans.size();
    vector<int> finalAns = reverse(ans, size);
    printArray(ans, size);
    printArray(finalAns, size);
}

int main()
{
    vector<int> arr1 = {9, 9};
    vector<int> arr2 = {9, 9};
    int size1 = arr1.size();
    int size2 = arr2.size();
    sum(arr1, size1, arr2, size2); // 2 4 6 8
    return 0;
}