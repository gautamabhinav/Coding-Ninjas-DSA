#include <bits/stdc++.h>
using namespace std;

int pairSum(int *input,int size,int x){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(input[i]+input[j]==x){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n;

        int *input = new int[n];

        for(int i=0;i<n;i++){
            cin>>input[i];
        }

        cin>>x;
        cout<<pairSum(input,size,x)<<endl;

        delete[] input;
    }
    return 0;
}