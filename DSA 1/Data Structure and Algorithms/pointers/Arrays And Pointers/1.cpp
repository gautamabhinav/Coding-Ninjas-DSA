#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[10];
    cout << a << endl;

    cout << &a[0] << endl;            // same output

    a[0] = 5;
    a[1] = 10;

    cout << *a << endl;
    cout << *(a + 1) << endl;

    int* p = &a[0];
    cout << a << endl;
    cout << p << endl;         // same output

    cout << sizeof(p) << endl;
    cout << sizeof(a) << endl;

    p = p + 1;
   // a = a + 1;               //error int [10] is not assignable;

    p = a + 1;
    //a++                           // not allowed




}