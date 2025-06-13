string getCompressedstring (string &str){

    int n=str.length();
    if(n == 0){
        return "";
    }

    int start =0, end=0;
    string k = "";

    while(n > start){
        if(str[start] == str[end]){
        count++;
        end++;
    }

    else {
        if(count > 1){
            k+=str[start] + to_string(count);
        }
        else {
            k+=str[start];
        }
        count=0;
        start=end;
    }

    }
    
    return k;
}


#include <bits/stdc++.h>
using namespace std;

int main(){
    int size = 1e6;
    string str;
    cin>>str;

    str = getCompressedstring(str);
    cout << str <<endl;
}





string getCompressedstring(string &str){
    int n=strlen(str);

    if(n==0){
        return "";
    }

    int start=0,end=0;
    int count =0;
    string k="";

    while(n>start){
        if(str[start] == str[end]){
            count++;
            end++;
        }
        else{
            if(count > 1){
                k+= str[start] + to_string(count);
            }
            else{
                k+= str[start];
            }
            start=0;
            start=end;
        }
    }
    return k;
}