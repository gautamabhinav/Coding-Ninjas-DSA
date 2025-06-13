void removeConsecutiveDuplicates(char str[]){
    for(int i=0;str[i]!= '\0';i++){
        if(str[i]==str[i-1]){
            str[i-1]=' ';
        }
    }
    int space =0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            char tmp = str[i];
            str[i] = str[space];
            str[space] = tmp;
            space++;
        }
    }
    str[space] = '\0';
}




#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=1e6;
    char str[n];
    cin>>str;

    removeConsecutiveDuplicates(str);
    cout<<str;
}










void consecutiveDuplicates(char str[]){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==str[i-1]){
            str[i-1] = ' ';
        }
    }

    int space=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            char tmp = str[i];
            str[i]=str[space];
            str[space] = tmp;
            space++;
        }
    }
    str[space] = '\0';
}