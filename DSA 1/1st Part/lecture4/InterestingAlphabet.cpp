#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char c=64+n-i+j;
            cout<<c
        }
        cout<<endl;
    }
}


/*

E
DE
CDE
BCDE
ABCDE

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char c=64+n+i-j;
            cout<<c;
            j++;
        }
        cout<<endl;
        i++;
    }
}
