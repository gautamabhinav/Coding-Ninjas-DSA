#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    int i=1;
    while(i<=N){
        int j=1;
        while(j<=i){
            char ch='A'+i-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}


/*

 A
 BB
 CCC

 */

 #include <iostream>
 using namespace std;

 int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch='A'+i-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }

 }