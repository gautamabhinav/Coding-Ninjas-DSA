#include <iostream>
using namespace std;

bool check(int n){
    int a=0,b=1,c=a+b;
    if(n==a || n==b)[
        return true;
    ]

    while(c<=n){
        if(c==n){
            return true;
        }
        a=b;
        b=c;
        c=a+b;
    }
    return false;
}

int main(){
    int n;
    cin>>n;

    if(check(n)){
        cout<< "true" <<endl;
    }
    else{
        cout<< "false" <<endl;
    }
}