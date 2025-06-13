#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    long binary=0,pow=1;
    while(N>0){
        int rem=N%2;
        binary=binary+pow*rem;
        pow=pow*10;
        N=N/2;
    }
    cout<<binary;
}