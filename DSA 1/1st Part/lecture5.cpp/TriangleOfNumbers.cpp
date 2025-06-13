#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    int i=1;
    while(i<=N){
        int spaces=1;
        while(spaces<=N-i){
            cout<<' ';
            spaces++;
        }
        int j=1;
        int k=i;
        while(j<=i){
            cout<<k;
            j++;
            k++;
        }
        j=i;
        k=2*i-2;
        while(j<=2*i-2){
            cout<<k;
            k--;
            j++;
        }
        cout<<endl;
        i++;
    }
}