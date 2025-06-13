#include <bits/stdc++.h>
using namespace std;

void pushZerosEnd(int *input,int n){
    int i=0;
    int j=0;

    while(i<size && j<size){
        if(input[j]!=0){
            int temp=input[i];
            input[i]=input[j];
            input[j]=temp;
            i++;
        }
        j++;
    }
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

        pushZerosEnd(input,size);

        for(int i=0;i<n;i++){
            cout<<input[i]<<" ";
        }
        cout<<endl;
        delete[] input;
    }
    return 0;
}