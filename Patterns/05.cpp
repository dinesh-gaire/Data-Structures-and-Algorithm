/*
1
23
345
6789
*/

#include<iostream>
using namespace std;

int main(){
    int n=4;
    int count=1;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<count;
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}