//FAHRENHEIGHT

#include <bits/stdc++.h>
using namespace std;

void printTable(int s,int e,int w){
    while(s<=e){
        cout<<s<<" "<<(5*(s-32))/9<<endl;
        s+=w;
    }
}

int main(){
    int s,e,w;
    cin>>s>>e>>w;

    printTable(s,e,w);
}