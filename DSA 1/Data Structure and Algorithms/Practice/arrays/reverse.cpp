#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int input[n];

    for(int i=0;i<n;i++){
        cin>>input[i];
    }

    int i=0,j=n-1;
    while(i<j){
        swap(input[i],input[j]);
        i++;
        j--;
    }

    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}