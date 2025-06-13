#include <iostream>
using namespace std;

void bubbleSort(int *input,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(input[i] input[i+1]){
               swap(input[i],input[j]); 
            }
        }
    }
}

void bubbleSort(int *input,int n){
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-1;i++){
            if(input[i] > input[i+1]){
               swap(input[i],input[i+1]); 
            }
        }
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

        bubbleSort(input,n);

        for(int i=0;i<n;i++){
            cout<<input[i]<<" ";
        }
        delete [] input;
        cout<<endl;
    }
}