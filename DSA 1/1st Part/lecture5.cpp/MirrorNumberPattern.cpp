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
            spaces+=1;
        }
        int ch=1;
        while(ch<=i){
            cout<<ch;
            ch+=1;
        }
        cout<<endl;
        i++;
    }
}