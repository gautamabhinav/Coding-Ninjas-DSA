#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1 ;i <= n;i++){
        for(int j = n ; j > 0 ; j--){
            cout << j;
        }
        cout <<  endl;
    }
}