#include <bits/stdc++.h>
using namespace std;

void replaceCharacter(char string[],char c1,char c2){
    for(int i=0;string[i]!='\0';i++){
        if(string[i]==c1){
            string[i]=c2;
        }
    }
}

int main(){
    char string[1000000];
    char c1,c2;
    cin>>string;
    cin>>c1>>c2;
    replaceCharacter(string,c1,c2);
    cout<<string<<endl;
}



void replaceCharacter(char s[], char c1, char c2){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==c1){
            s[i]=c2;
        }
    }
}







int main(){
    char s[1000000];
    char c1,c2;

    cin>>s;
    cin>>c1>>c2;

    replaceCharacter(s,c1,c2);

    cout<<s<<endl;

}