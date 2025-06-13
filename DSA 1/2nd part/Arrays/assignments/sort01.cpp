#include <bits/stdc++.h>
using namespace std;

void sort01(int *input,int n){
    int lo=0, high= n-1;

    while(low<high){
        if(input[lo] == 1 && input[high]== 0){
            swap(input[lo++], input[high]--);
        }
        else if(input[low]==1){
            high--;
        }
        else{
            lo++;
        }
    }
}

void sortZeroesAndOne(int *input, int size)
{
    //Write your code here
    int lo=0,high=size-1;
    
    while(lo<high){
        
        if(input[lo]==1 && input[high]==0)
        	swap(input[lo++],input[high--]);
        else if(input[lo]==1)
            high--;
        else
            lo++;
        	
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int *input = new int[n];

        for(int i=0;i<n;i++){
            cin>>input[i];
        }

        sort01(input,n);

        for(int i=0;i<n;i++){
            cout<<input[i];
        }
        cout<<endl;
        delete[] input;
    }
    return 0;
}