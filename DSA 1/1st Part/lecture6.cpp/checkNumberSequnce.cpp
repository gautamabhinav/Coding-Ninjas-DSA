#include<iostream>
using namespace std;

int checkNumberSequence(int n){
    int previous;
    cin>>previous;

    bool isDecreasing =true;
    n--;

    while(n--){
        int current;
        cin>>current;

        if(current==previous)return false;
        else if(current<previous){
            if(isDecreasing==false)
                return false;
            else
                previous=current;
        }
        else{
            if(isDecreasing == true)
                isDecreasing=false;
            else
                previous=current;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;

    if(checkNumberSequence(n))cout<<"true";
    else
        cout<<"false";
    
    return 0;
}