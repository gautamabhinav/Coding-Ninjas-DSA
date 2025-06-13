#include <iostream>
using namespace std;

void selectionSort(int *input , int n){

    for(int i=0;i<n-1;i++){
        int min=input[i], minIndex=i;

        for(int j=i+1;j<n;j++){
            if(min>input[j]){
                min=input[j];
                minIndex=j;
            }
        }
    }

    swap(input[i], input[minIndex])
}








int main(){

}