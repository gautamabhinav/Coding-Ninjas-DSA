#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int j=0;
    while(j*j<=n){
        j+=1;
    }
    j-=1;
    cout<<j;
}