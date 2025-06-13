//maximum in an array

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int input[n];

    for(int i=0;i<n;i++){
        cin>>input[i];
    }

    int max=input[0];
    for(int i=1;i<n;i++){
        if(input[i]>max){
            max=input[i];
        }
    }
    cout<<max<<endl;



    /*int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(input[i]>max){
            max=input[i];
        }
    }
    cout<< "Max : "<<max<<endl;
    */
}