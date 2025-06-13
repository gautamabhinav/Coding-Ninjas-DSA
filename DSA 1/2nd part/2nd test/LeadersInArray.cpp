void Leaders (int arr[] , int n){

    int j=0;
    int *save = new int[len];
    int largest = INT_MIN;

    for(int i=len-1 ; i>=0 ;i--){
        if(arr[i] >= largest){
            save[j] = arr[i];
            j++;
            largest = arr[i];
        }
    }
    for(int i=j-1; i>=0 ;i--){
        cout << save[i] << " ";
    }
}


void Leaders(int* arr,int len) {
    int j=0;
    int *save = new int[len];
    int largest=INT_MIN;
    //largest contains the maximum value of leading array. 
    for(int i=len-1;i>=0;i--) {
        if(arr[i]>=largest){
            // if element at current index is greater than largest then put it in array and make ot largest;
            save[j]=arr[i];
            j++;
            largest=arr[i];
        }
    }
    for(int i=j-1;i>=0;i--) {
        // Print the array in reverse order... 
        cout<<save[i] << " "; 
    }
}







#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Leaders(arr,n);
}