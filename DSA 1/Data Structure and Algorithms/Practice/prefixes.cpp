#include <bits/stdc++.h>
using namespace std;

int length(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++)
        count++;

    return count;
}

void reverseString(char arr[]){
    int len=length(arr);
    int i=0,j=len-1;

    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}



void printAllPrefixes(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        for(int j=0;j<=i;j++){
            cout<<arr[j];
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    char input[n];
    cin>>input;
    //cin.getline(input,n);

    //printAllPrefixes(input);
    cout<<length(input)<<endl;
    //reverseString(input);
    //cout<<input<<endl;
}