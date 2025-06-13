#include <bits/stdc++.h>
using namespace std;

int findUnique(int *arr,int size){
    for(int i=0;i<size;i++){
        int j;
        for(j=0;j<n;j++){
            if(i!=j){
                if(arr[i]==arr[j]){
                    break;
                }
            }
        }
        if(j==size){
            return arr[i];
        }
    }
}


int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int *input = new int [n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<findUnique(arr,n)<<endl;
    }
    return 0;
}