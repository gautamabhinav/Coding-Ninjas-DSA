#include <bits/stdc++.h>
using namespace std;

void reverse(int *input,int i,int j){
    while(i<=j){
        swap(input[i],input[j]);
        i++;
        j--;
    }
}

void reverse(int *input, int d, int n){
    reverse(input,0,n-1);
    reverse(input,0,n-d-1);
    reverse(input,n-d,n-1);
}

// 7 6 5 4 3 2 1

// 3 4 5 6 7 1 2


int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int *input = new int[n];

        for(int i=0;i<n;i++){
            cin>>input[i];
        }
        int d;
        cin>>d;

        rotate(input,d,n);

        for(int i=0;i<n;i++){
            cout<<input[i]<<" ";
        }
        delete[] input;
        cout<<endl;
    }
    return 0;
}