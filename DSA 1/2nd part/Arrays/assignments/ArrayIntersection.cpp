#include<bits/stdc++.h>
using namespace std;

void intersection(int *input1, int  *input2, int n1, int n2){
    int visited[n2+1]={0};
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(input1[i]==input2[j] && visited[j]==0){
                visited[j]=1;
                cout<<input1[i]<<" ";
                break;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n1,n2;

        cin>>n1;
        int *input1 = new int[n1];

        for(int i=0;i<n1;i++){
            cin>>input1[i];
        }

        cin>>n2;
        int input2 = new int[n2];

        for(int i=0;i<n2;i++){
            cin>>input2[i];
        }
        
        intersection(input1,input2,n1,n2);

        delete [] input1;
        delete [] input2;
        cout<<endl;
    }
    return 0;
}