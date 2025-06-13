#include <iostream>
using namespace std;

int main(){
    int S,E,W;
    cin>>S>>E>>W;

    while(S<=E){
        cout<<S<<" "<<(5*(S-32))/9<<endl;
        S=S+W;
    }
}

/*

0   -17
20  -6
40  4
60  15
80  26
100 37

*/


#include <iostream>
using namespace std;

int main(){
    int s,e,w;
    cin>>s>>e>>w;

    while(s<=e){
        cout<<s<<" "<<(5*(s-32))/9<<endl;
        s=s+w;
    }
}