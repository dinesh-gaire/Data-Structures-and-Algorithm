/*
ABC
BCD
CDE
*/

#include<iostream>
using namespace std;

int main(){
    int n=3;

    int i=1;
    while(i<=n){
        int j=1;
        char start='A'+i-1;
        while(j<=n){
            cout<<start;
            start++;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}