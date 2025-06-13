#include <iostream>
#include <climits>
using namespace std;

int main(){
    //Take array input from the user

    int n;
    cin>>n;

    int input[100];
    
    for(int i=0;i<n;i++)
        cin>>input[i];

    //print arrray
    for(int i=0;i<n;i++)
        cout<<input[i]<<endl;


    //largest element of an array

/*
    //this code will failed at the 0 th value

    int max=input[0];
    for(int i=1;i<n;i++){
        if(input[i]>max)
            max=input[i];
    }
    cout<<"Max : "<< max<<endl;
*/

/*
    //this code will failed at the  negative element ans==-1;

    int max=0;
    for(int i=0;i<n;i++){
        if(input[i]>max)
            max=input[i];
    }
    cout<<"Max : "<< max<<endl;
*/

    int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(input[i]>max)
                max=input[i];
        }
        cout<<"Max : "<< max<<endl;
}