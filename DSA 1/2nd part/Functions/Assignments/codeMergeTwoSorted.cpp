#include <bits/stdc++.h>
using namespace std;

void merge(int *arr1,int n1, int *arr2, int n2, int ans){

    
}


int main(){
    int t;
    cin>>t;

    while(t--){
        int n1;
        cin>>n1;

        int *arr1= new int[n1];

        for(int i=0 ;i<n1;i++){
            cin>>arr1[i];
        }

        int n2;
        cin>>n2;

        int *arr2 = new int[n2];

        for(int i=0;i<n2;i++){
            cin>>arr2[i];
        }

        merge(arr1,n1,arr2,n2,ans);

        for(int i=0;i<n1+n2;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        delete[] arr1;
        delete[] arr2;
        delete[] ans;
    }
}