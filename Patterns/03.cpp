/*
123
456
789
*/

#include<iostream>
using namespace std;

int main(){
    int n=3;
    int count=1;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count;
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}