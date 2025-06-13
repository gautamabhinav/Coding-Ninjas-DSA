#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    int i=1;
    while(i<=N){
        int spaces=1;
        while(spaces<=N-i){
            cout<<" ";
            spaces++;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        int j=i-1;
        while(j>=1){
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
}