#include <iostream>
using namespace std;

int main(){
    int ror=15|30;
    int arnd=15 & 30;
    int rnot=~15;
    int rxor=15 ^ 30;
    int rls=15 << 2;
    int rrs =15>>2;

    cout<<ror<<endl;
    cout<<arnd<<endl;
    cout<<rnot<<endl;
    cout<<rxor<<endl;
    cout<<rls<<endl;
    cout<<rrs<<endl;
}