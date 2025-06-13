#include <bits/stdc++.h>
using namespace std;

int duplicateNumber(int *arr,int n){
    bool flag=false;
    int temp;

    for(int i=0;i<n;i++){
        int target=arr[i];
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            if(arr[j]==target){
                flag=true;
                temp=target;
                break;
            }
        }
        if(flag==true)
            break;
    }
    return temp;
}


int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int *arr = new int[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<< duplicateNumber(arr,n)<<endl;
    }
    return 0;
}