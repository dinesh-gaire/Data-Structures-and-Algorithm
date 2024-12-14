/*
   *
  **
 ***
****
*/

#include<iostream>
using namespace std;

int main(){
    int n=4;
    char val='*';

    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<' ';
            space=space-1;
        }
        int j=1;
        while(j<=i){
            cout<<val;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}