#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}

void bubbleSort(int arr[],int n){
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-1;i++){
            if(arr[i] > arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    printArray(arr,n);
}