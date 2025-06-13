#include <bits/stdc++.h>
using namespace std;


bool checkPalindrome(char str[]){

    int n=strlen(str);
    int i=0;
    int j=n-1;

    while(i<j){
        if(str[i]!=str[j])
            return false;
        else{
            i++;
            j--;
        }
    }
    return true;
}


int main(){
    int size=1e6;
    char str[size];
    cin>>str;
    cout<< (checkPalindrome(str)? "true" : "false");
}

bool checkPalindrome(char str[]){
    int n=strlen(str);
    int i=0;
    int j=n-1;

    while(i<j){
        if(str[i]!=str[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}