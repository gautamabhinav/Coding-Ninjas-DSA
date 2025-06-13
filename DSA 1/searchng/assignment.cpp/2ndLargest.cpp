#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int *input, int n){

    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(input[i]>max){
            max=input[i];
        }
    }
    int max2=INT_MIN;
    for(int i=0;i<n;i++){
        if(input[i]<max && input[i]>max2){
            max2=input[i];
        }
    }
    return max2;
}

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
        cout << findSecondLargest(input,n);

        delete[] input;
    }
    return 0;
}