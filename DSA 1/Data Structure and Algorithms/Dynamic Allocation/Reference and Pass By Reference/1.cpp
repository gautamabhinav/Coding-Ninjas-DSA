#include <bits/stdc++.h>
using namespace std;

void increment(int& i){
    i++;
}

// bad Practice
int& f(int n){
    int a = n;
    return a;
}

// bad practice
int* f2(){
    int i = 10;
    return &i;
}

int main(){
    // int i = 10;
    // int &j = i;

    // i++;
    // cout << j << endl;

    int* p = f2();
    int i;
    i = 10;

    int& k1 = f(i);

    increment(i);
    cout << i << endl;

    int& j = i;

    i++;
    cout << j << endl;
    j++;
    cout << i << endl;

    int k = 100;
    j = k;
    cout << i << endl;
}