#include<bits/stdc++.h>
using namespace std;

int balancedBTs(int h) {
    if(h <= 1) { // Base case
        return 1;
    }
    int mod = (int) (pow(10, 9)) + 7;
    int x = balancedBTs(h - 1); // Answer for h-1
    int y = balancedBTs(h - 2); // Answer for h-2


// // /* Since, we need to find the total number of combinations, so will multiply the left
// // height’s output and the right height’s output as they are independent of each other
// // (Using law of multiplication in combinations)
// // Possible Cases:
// // ● Both h-1 = x*x
// // ● h-1 and h-2 = x*y
// // ● h-2 and h-1 = y*x
// // Now, we will add all these together.



    int temp1 = (int)(((long)(x)*x) % mod);
    int temp2 = (int)((2* (long)(x) * y) % mod);
    int ans = (temp1 + temp2) % mod;
    return ans;
}


// long  balancedBTs(int h){
//     long *arr=new long[h+1];
//     arr[0]=1;
//     arr[1]=1;
//      long mod=(int)pow(10,9)+7;
//     for(long i=2;i<=h;i++)
//     {
//         arr[i]=((arr[i-1]*arr[i-1])%mod+(2*arr[i-1]*arr[i-2])%mod)%mod;
//     }
//     return arr[h];
// }

int main() {
    int h;
    cin >> h;
    cout << balancedBTs(h) << endl;
}