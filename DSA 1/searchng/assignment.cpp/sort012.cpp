#include <bits/stdc++.h>
using namespace std;


void sort012(int *arr, int n){
    
    int nz=0;
    int nt=n-1;

    int i=0;
    while(i<=nt){

        if(arr[i]==0){
            swap(arr[i],arr[nz]);
            i++;
            nz++;
        }
        else if(arr[i]==1){
            i++;
        }       
        else{
            swap(arr[i],arr[nt]);
            nt--;
        } 
    }
}


int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int *arr = new int[n];

        for(int i=0;i>n;i++){
            cin>>arr[i];
        }
        
        sort012(arr,n);

        for(int i=0;i<n;i++){
            cout<<arr[i];
        }

        delete[] arr;
        cout<<endl;
    }
    return 0;
}