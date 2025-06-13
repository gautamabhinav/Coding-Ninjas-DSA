#include <bits/stdc++.h>
using namespace std;

void trimSpaces(char input[]){
    int i;
    int j=0;
    for(int i=0;input[i]!='\0';i++){
        if(input[i]!=' '){
            input[j]=input[i];
            j++;
        }
    }
    input[j]='\0';
}


int main(){
    char input[1000000];
    cin.getline(input,1000000);
    trimSpaces(input);
    cout<< input << endl;
}


void trimSpaces(char s[]){
    int i,j=0;

    for(i=0;s[i]!='\0';i++){
        if(s[i]!=' '){
            s[j]=s[i];
            j++;
        }
    }
    s[j]='\0';
}



#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[1000000];
    cin.getline(s,1000000);
    trimspaces(s);
    cout<<s<<endl;
}