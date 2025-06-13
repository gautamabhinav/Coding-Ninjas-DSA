#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    for(int i=1;i<=N;i++){
        int k=1;
        while(k<=N-i){
            cout<<" ";
            k=k+1;
        }
        for(int j=1;j<(2*i);j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

//n=4

// ...*
// ..***
// .*****
// *******



#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1;i<n;i++){
        int k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }

        for(int i=1;i<(2*i);i++){
            cout<<"*";
        }
        cout<<endl;
    }
}