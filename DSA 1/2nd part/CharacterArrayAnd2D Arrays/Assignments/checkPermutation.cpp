bool isPermutation(char str1[], char str2[]){
    int strlen(str1);

    int freq[256] = 0;

    for(int i=0;i<k;i++){
        freq[str1[i]]++;
    }

    for(int i=0;i<k;i++){
        freq[str2[i]]--;
    }

    for(int i=0;i<256;i++){
        if(freq[i]!=0)
            return false;
    }
    return true;
}




#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=1e6;
    char str1[n];
    char str2[n];

    cin>>str1>>str2;
    cout<<(isPermutation(str1,str2)? "true" : "false");
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=1e6;
    int str1[n];
    int str2[n];

    cin>>str1>>str2;
    cout<<(isPermutation(str1,str2) ? "true" : "false");
}