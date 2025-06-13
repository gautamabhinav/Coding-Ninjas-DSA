//spiral print

#include <bits/stdc++.h>
using namespace std;

void spiralPrint(int **input, int row,int col){
    int RS=0,RE=row-1,CS=0,CE=col-1;
    int count=0;

    while(count< row*col){
        for(int i=CS; i<=CE ;i++){
            cout<<input[RS][i]<<" ";
            count++;
        }
        RS++;
        for(int i=RS;i<=RE;i++){
            cout<<input[i][CE];
            cout++;
        }
        CE--;
        for(int i=CE;i>=CS;i--){
            cout<<input[RE][i];
            count++;
        }
        RE--;
        for(int i=RE;i>=RS;i--){
            cout<<input[i][CS];
            count++;
        }
        CS++;
    }
}


void spiralPrint(int **input, int nRows, int nCols)
{
    //Write your code here
int RS=0,RE=nRows-1,CS=0,CE=nCols-1;
    int count=0;
  
while(count<nRows*nCols)
{
    for(int i=CS; i<=CE; i++)
    {
      cout<<input[RS][i]<<" ";
        count++;
    }
    RS++;
    for(int i=RS; i<=RE; i++)
    {
        cout<<input[i][CE]<<" ";
        count++;
    }
    CE--;
    for(int i=CE;i>=CS;i--)
    {
      cout<<input[RE][i]<<" ";
        count++;
    }
    RE--;
    for(int i=RE;i>=RS;i--)
    {
        cout<<input[i][CS]<<" ";
        count++;
    }
    CS++;    
}
}



int main(){
    int t;
    cin>>t;
    while(t--){
        int r,c;
        cin>>r>>c;

        int **matrix = new int *[row];

        for(int i=0;i<row;i++){
            matrix[i]=new int [col];
            for(int j=0;j<col;j++){
                cin>>matrix[i][j];
            }
        }
        spiralPrint(matrix,row,col);
        for(int i=0;i<row;i++){
            delete[] matrix[i];
        }
        delete[] matrix;

        cout<<endl;
    }
}



void spiralPrint(int **matrix, int row, int col){
    int RS=0, RE=row-1 ,CS=0, CE=col-1;
    int count=0;

    while(count<row*col){
        for(int i=CS;i<=CE;i++){
            cout<<matrix[RS][i]<<" ";
            count++;
        }
        RS++;
        for(int i=RS;i<RE;i++){
            cout<<matrix[i][CE]<<" ";
            count++;
        }
        CE--;
        for(int i=CE;i>CS;i--){
            cout<<matrix[RE][i]<<" ";
            count++;
        }
        RE--;
        for(int i=RE;i>RS;i--){
            cout<<matrix[i][CS]<<" ";
            count++;
        }
        CS++
    }
}





#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int row,col;
        cin>>row>>col;

        int **input = new int *[row];
        for(int i=0;i<row;i++){
            input[i]=new int[col];
            for(int j=0;j<col;j++){
                cin>>arr[i][j];
            }
        }

        spiralPrint(matrix,row,col);

        for(int i=0;i<row;i++){
            delete[] matrix[i];
        }
        delete[] matrix;
        cout<<endl;
    }
}