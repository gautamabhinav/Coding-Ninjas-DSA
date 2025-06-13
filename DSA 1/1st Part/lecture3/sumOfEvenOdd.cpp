#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    int odd_value=0;
    int even_value=0;

    while(N>0){
        int x=N%10;
        if(x%2==0)
            even_value+=x;
        else
            odd_value+=x;

        N=N/10;
    }
    cout<<even_value<<" "<<odd_value;
}

#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    int even_value=0;
    int odd_value=0;

    while(N>0){
        int x=N%10;

        if(x%2==0)
            even_value+=x;
        else
            odd_value+=x;

        N=N/10;
    }
    cout<<even_value<<" "<<odd_value<<endl;
}


// sum of even odd 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int even_sum=0;
    int odd_sum=0;

    while(n>0){
        int x=n%10;
        if(x%2==0){
            even_sum+=i;
        }
        else{
            odd_sum+=i;
        }
        n=n/10;
    }
    cout<<even_sum<<" " <<odd_sum<<endl;
}