#include <iostream>
using namespace std;

int binarySearch(int *input,int n,int val){
   int start=0;
   int end=n-1;

   while(start<=end){
       int mid=(start+end)/2;

       if(input[mid]==val){
           return mid;
       }
       else if(val<arr[mid]){
           end=mid-1;
       }
       else{
           start=mid+1;
       }
   }
   return -1
}

int main(){
    int n;
    cin>>n;

    int *input = new int [n];

    for(int i=0;i<n;i++){
        cin>>input[i];
    }

    int t;
    cin>>t;


    while(t--){
        int val;
        cin>>val;

        cout<< binarySearch(input,size,val) <<endl;
    }
    delete [] input;
    return 0;
}