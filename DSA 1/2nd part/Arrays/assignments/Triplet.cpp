#include <bits/stdc++.h>
using namespace std;

int tripletSum(int input,int n,int x){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(input[i]+input[j]+input[k]==x){
                    count++;
                }
            }
        }
    }
    return count;
}


int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        int x;

        cin>>n;

        int *input new int [n]; 

        for(int i=0;i<n;i++){
            cin>>input[i];
        }

        cin>>x;

        cout<<tripletSum(input,n,x)<<endl;
        delete[] input;
    }
    return 0;
}