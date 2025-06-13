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




#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

int main(){
    int size = 1e6;
    char str[size];
    cin>>str;
    cout<< (checkPalindrome(str) ? "true" : "false");
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



#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=1e6;
    char str[n];
    cin>>str;
    cout<< (checkPalindrome(str) ? "true" : "false");
}
