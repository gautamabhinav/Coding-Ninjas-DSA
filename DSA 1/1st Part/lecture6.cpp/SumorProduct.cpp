#include<iostream>
using namespace std;

int main(){
    int n,c;
    cin>>n>>c;

    int i,sum=0,pro=1;

    if(c==1){
        for(int i=1;i<=n;i++)
            sum+=i;
        cout<<sum<<endl;
    }
    else if(c==2){
        for(int i=1;i<=n;i++)
            pro*=i;
        cout<<pro;
    }
    else
        cout<<"-1";
}