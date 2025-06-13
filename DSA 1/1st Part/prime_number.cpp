#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter n" <<endl;
    cin>>n;

    int d=2;
    bool divided = false;                       //N=7
    while(d<n){
        if(n%d==0){
            cout<<"Not Prime"<<endl;
            divided = true;
        }
        d=d+1;   // we increment d+=1  if we don't do this then it will in the loop and not get the answer
    }
    if(!divided){
        cout<< "prime" <<endl;
    }
}





#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool dividend = false;

    int d=2;
    while (d<n){
        if(d % n == 0){
            dividend = true;
        }
    }
    d=d+1;

    if(! dividend){
        cout << "prime" << endl;
    }
    else{
        cout << "non -prime";
    }
}