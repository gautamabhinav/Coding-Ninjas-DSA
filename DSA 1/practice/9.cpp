#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    // for(int i = 1 ; i <= n ;i++){
    //     for(int j = n ; j >= i ;j--){
    //         cout << j;
    //     }
    //     cout << endl;
    // }


    
     for(int i = n ; i >= 1 ; i--){
        for(int j = 1 ; j <= i ; j++){
            cout << i ;
        }
        cout << endl;
    }
}