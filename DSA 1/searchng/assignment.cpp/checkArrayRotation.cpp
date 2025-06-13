#include <bits/stdc++.h>
using namespace std;

int checkRotate(int *input, int n){
    for(int i=0;i<n;i++){
        if(input[i] < input[i-1]){
            return i;
        }
    }
    return 0;
}


int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int *input = new int [n];

        for(int i=0;i<n;i++){
            cin>>input[i];
        }
        cout<<checkRotate(input,n);
        delete[] input;
    }
    return 0;
}