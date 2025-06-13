#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1,j=1;
    while(i<=n){
        int s=(3*j)+2;
        if(s%4!=0){
            cout<<s<<" ";
            i++;
        }
        j++;
    }
}