#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int temp=n,rev=0;
    while(temp>0){
        int lastDigit=temp%10;
        temp=temp/10;
        rev=rev*10+lastDigit;
    }
    cout<<rev;
}