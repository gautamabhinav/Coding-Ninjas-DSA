#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<(i+j-1);
        }
        cout<<endl;
    }
}


// 1
// 23
// 345
// 4567

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<(i+j-1);
        }
        cout<<endl;
    }
}