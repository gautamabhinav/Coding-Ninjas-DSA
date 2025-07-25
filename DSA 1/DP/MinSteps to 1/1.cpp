#include <bits/stdc++.h>
using namespace std;


int minStepsHelper(int n , int *ans) {
    //Base case

    if(n <= 1) {
        return 0;
    }

    if(ans[n] != -1) {
        return ans[n];
    }

    // Recursive call
    int x = minStepsHelper(n - 1 , ans);

    int y = INT_MAX;
    int z = INT_MAX;
    if(n %2 == 0) {
        y = minStepsHelper(n/2 , ans);
    }

    if(n %3 == 0) {
        z = minStepsHelper(n/3 , ans);
    }

    // calculate final output
    int output = min(x, min(y,z)) + 1;

    // save output for future use

    ans[n] = output;

    return output;
}


int minSteps(int n) {
    //Base case

    if(n <= 1) {
        return 0;
    }

    // Recursive call
    int x = minSteps(n - 1);

    int y = INT_MAX;
    int z = INT_MAX;
    if(n %2 == 0) {
        y = minSteps(n/2);
    }

    if(n %3 == 0) {
        z = minSteps(n/3);
    }

    // calculate final output
    int ans = min(x, min(y,z)) + 1;

    return ans;
}
 
int main() {
    int n;
    cin >> n;

    cout << minSteps(n) << endl;
}