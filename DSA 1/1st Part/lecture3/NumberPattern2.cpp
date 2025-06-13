#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    int val=1;

    for(int i=1;i<=N;i++){

        int k=1;
        while(k<=N-i){
            cout<<" ";
            k=k+1;
        }

        int j=1;
    int d=i;
        while(j<=i){
            cout<<d;
            d++;
            i++;
        }
        cout<<endl;
    }
}

/*

...1
..23
.345
4567

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int val=1;

    int k=1;
    for(int i=1;i<n;i++){
        while(k<=n-i){
            cout<<" ";
            k++;
        }

        int j=1;
        int d=i;
        while(j<=i){
            cout<<d;
            d++;
            i++;
        }
        cout<<endl;
    }
}