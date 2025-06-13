#include <bits/stdc++.h>
using namespace std;

void waveprint(int **input,int row,int col){
    for(int j=0;j<col;j++){
        if(j%2==0){
            for(int i=0;i<row;i++){
                cout<<input[i][j];
            }
        }
        else{
            for(int i=row-1;i>=0;i--){
                cout<<input[i][j]<<" ";
            }
        }
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int r,c;
        cin>>r>>c;

        int **input=new input *[r];
        for(int i=0;i<r;i++){
            input[i] = new int [col];

            for(int j=0;j<c;j++){
                cin>>input[i][j];
            }
        }
        waveprint(input,r,c);
        cout<<endl;
    }
}






void wavePrint(int *input,int n,int m){

    for(int j=0;j<col;j++){
        if(j%2==0){
            for(int i=0;i<row;i++){
                cout<<input[i][j]<<" ";
            }
        }
        else{
            for(int i=row-1;i>=0;i++){
                cout<<input[i][j]<<" ";
            }
        }
    }
    
}






#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        int **input = new int*[n];
        for(int i=0;i<n;i++){
            input[i]=new int[col];
            for(int j=0;j<m;j++){
                cin>>input[i][j];
            }
        }
        wavePrint(input,n,m);
        cout<<endl;        
    }
}
