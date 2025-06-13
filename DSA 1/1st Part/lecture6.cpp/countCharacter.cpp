#include<iostream>
using namespace std;

int main(){
    int c1=0,c2=0,c3=0;
    char ch;
    ch=cin.get();
    while(ch!='$'){
        if(ch>='a' && ch<='z')
            c1++;
        else if(ch>='0' && ch<='9')
            c2++;
        
        else if(ch=='\n' || ch==' ' || ch=='\t')
            c3++;

        ch=cin.get();
    }
    cout<<c1<<' '<<c2<<' '<<c3;
    return 0;
}