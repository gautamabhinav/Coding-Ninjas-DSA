void reverse(char input[], int startIndex, int endIndex){
    int i=startIndex;
    int j=endIndex;

    while(i<j){
        std:swap(input[i],input[j]);
        i++;
        j--;
    }

}

void reverseEachWord(char str[]){

    int i=0 , j=0;

    while(input[i]!='\0'){

        while(input[j] != ' ' && input[j] != '\0'){
            j++;
        }

        reverse(input,i,j-1);
        
        if(input[j] == '\0'){
            break;
        }

        i=j+1;
        j++;
    }
}



#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 1e6;
    char str[n];

    cin.getline(str,size);
    reverseEachWord(str);

    cout << str;
}