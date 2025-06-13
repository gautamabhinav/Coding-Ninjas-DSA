#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n" <<endl;     
    cin>>n;

    int i=1;
    int val=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<val;
            j=j+1;
            val+=1;
        }
        cout<<endl;
        i=i+1;
    }
}

// 1 
// 2 3
// 4 5 6
// 7 8 9 10