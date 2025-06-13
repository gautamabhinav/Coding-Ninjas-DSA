int helper (int a[], int size , int x , int idx){
    if(idx == size){
        return -1;
    }
    if(a[idx] == x){
        return idx;
    }
    return helper(a , size , x , idx + 1);
}


int firstIndex(int a[], int size, int x){
    return helper(a , size , x , 0);
}


#include <bits/stdc++.h>
using namespace std;

int main(){

}

