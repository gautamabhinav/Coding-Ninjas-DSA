#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0;
    int i=1;
    while(i<=n){
        if(i%2==0)
            sum+=i;
        i++;
    }
    cout<<sum;
}

// sum of even numbers

#include<bits/stdc++.h>
using namesspace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    int sum=0;
    while(i<=n){
        if(i%2==0){
            sum+=i;
        }
        i++;
    }
    cout<<sum;
}