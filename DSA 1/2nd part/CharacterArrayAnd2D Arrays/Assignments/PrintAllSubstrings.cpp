#include <iostream>
#include <cstring>
using namespace std;

void printAllSubstrings(char input[]){
    int k=1;
    while(k<=strlen(input)){
        for(int i=0;i<strlen(input)-k;i++){
            for(int j=i;j<i+k;j++){
                cout<<input[j];
            }
            cout<<endl;
        }
        k++;
    }
}



int main(){
    int size=1e6;
    char str[size];
    cin>>str;
    printAllSubstrings(str);
}




void printAllSubstrings(char str[]){

    int k=1;
    while(k<=strlen(str)){
        for(int i=0;i<=strlen(str)-k;i++){
            for(int j=i;j<=i+k;j++){
                cout<<str[j];
            }
            cout<<endl;
        }
        k++;
    }
}












#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=1e6;
    char str[n];
    cin>>str;

    printAllSubstrings(str);
}