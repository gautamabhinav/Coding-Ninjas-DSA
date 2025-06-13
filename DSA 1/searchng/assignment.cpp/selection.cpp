#include <bits/stdc++.h>
using namespace std;

void insertionSort(int *input, int n){

    for(int i=1;i<n;i++){
        int current=input[i];
        int j;
        for(int j=i-1; j>=0; j--){
            if(current < input[j]){
                input[j+1]=input[j];
            }
            else{
                break;
            }
        }
        input[j+1]=current;
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
            cin>>input[i];
        }

        insertionSort(input,n);

        for(int i=0;i<n;i++){
            cout<<input[i];
        }
        delete[] input;

        cout<<endl;
    }
    return 0;
}