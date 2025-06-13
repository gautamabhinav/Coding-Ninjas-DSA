#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n" <<endl;     
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}

1
1 2
1 2 3
1 2 3 4