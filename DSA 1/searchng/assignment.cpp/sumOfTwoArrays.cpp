#include <bits/stdc++.h>
using namespace std;

void sumOfTwoArrays(int *input1, int n1, int input2, int n2, int *output){

    int i=n1-1;
    int j=n2-1;
    int carry=0;
    int k=max(n1,n2);


    while(i>=0 && j>=0){

        int sum=input1[i] + input2[j] + carry;
        output[k]=sum%10;
        carry=sum/10;

        i--;
        j--;
        k--;
    }

    while(i>=0){

        int sum=input1[i] + carry;
        output[k]=sum%10;
        carry=sum/10;

        i--;
        k--;
    }

    while(j>=0){

        int sum=input2[j]+ carry;
        output[k]=sum%10;
        carry=sum/10;

        j--;
        k--;
    }
    output[0] = carry;
}


int main(){
    int t;
    cin>>t;

    while(t--){
        int n1;
        cin>>n1;

        int *input1 = new int[n1];

        for(int i=0;i<n1;i++){
            cin>>input1[i];
        }

        int n2;
        cin>>n2;

        int *input2 = new int[n2];

        for(int i=0;i<n2;i++){
            cin>>input2[i];
        }

        int outsize = 1+ max(n1,n2);
        
        int *output = new int[output];

        sumOfTwoArrays(input1,n1,input2,n2,output);

        for(int i=0;i<outsize;i++){
            cout<<output[i]<< " ";
        }

        delete[] input1;
        delete[] input2;
        delete[] output;
        cout<<endl;
    }
    return 0;
}