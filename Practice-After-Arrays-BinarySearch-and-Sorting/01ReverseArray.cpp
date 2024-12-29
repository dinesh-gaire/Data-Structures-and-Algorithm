#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> arr)
{
    int start = 0, end = arr.size() - 1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    return arr;
}

void printArray(vector<int> ans){
    cout<<"Printing Reverse Array: "<<endl;
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> arr;

    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);

    vector<int> ans = reverse(arr);
    printArray(ans);
}