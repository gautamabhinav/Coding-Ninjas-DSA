#include <bits/stdc++.h>
using namespace std;

void swapAlternative(int arr[] ,int n){
    for(int i=0;i<n-1;i+=2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}



void swapAlternate(int *arr, int size)
{
    //Write your code here
    for(int i=0;i<size-1;i+=2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
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
        swapAlternative(arr,n)
        for(int i=0;i<n;i++){
            cout<<arr[i];
        }
        cout<<endl;
        delete [] arr;
    }
}