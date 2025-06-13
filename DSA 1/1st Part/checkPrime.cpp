#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool dividend=false;
    for(int d=2;d<n;d++){
        if(n%d)==0;
            dividend=true;
    }
    if(dividend){
        cout<<"Not Prime";
    }else{
        cout<<"Prime" <<endl;
    }
}



#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    bool isDividend = false;
    for(int i= 2; i<n ;i++){
        if(n % i == 0){
            isDividend = true;
        }
    }

    if(isDividend){
        cout << " prime" <<endl;
    }
    else {
        cout << "non - prime" <<endl;
    }

    return 0;
}