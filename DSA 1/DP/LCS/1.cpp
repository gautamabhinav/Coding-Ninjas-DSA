#include <bits/stdc++.h>
using namespace std;

int lcs_DP(string s,string t) {
    int m = s.size();
    int n = t.size();
    int **output = new int*[m+1];

    for(int i= 0 ;i<=m ;i++) {
        output[i] = new int[n +1];
    }

    // fill first row
    for(int j = 0; j<=n ;j++) {
        output[0][j] = 0;
    }

    // fill first col
    for(int i = 1; i <= m ; i++) {
        output[i][0] = 0;
    }

    for(int i = 1; i <= m ;i++) {
        for(int j = 1; j <= n; j++) {
            //check if 1st character matches
            if(s[m - i] == t[n - j]) {
                output[i][j] = 1 + output[i-1][j - 1];
            }
            else{
                int a = output[i - 1][j];
                int b = output[i][j - 1];
                int c = output[i - 1][j -1];
                output[i][j] = max(a,max(b,c));
            }
        }
        return output[m][n];
    }
}

int lcs_mem(string s,string t , int **output) {

    int m = s.size();
    int n = t.size();

    //Base Case
    if(s.size() == 0  || t.size() == 0) {
        return 0;
    }

    //check if ans already exists
    if(output[m][n] != -1) {
        return output[m][n];
    }

    int ans;
    // Recursive calls

    if(s[0] == t[0]) {
        ans = 1 + lcs(s.substr(1) , t.substr(1));

    }
    else{
        int a = lcs(s.substr(1),t);
        int b = lcs(s,t.substr(1));
        int c = lcs(s.substr(1) , t.substr(1));

        ans = max(a,max(b,c));
    }

    //save the calculation
    output[m][n] = ans;

    // Return ans
    return ans;
}

int lcs(string s,string t) {
    //Base Case
    if(s.size() == 0  || t.size() == 0) {
        return 0;
    }

    // Recursive calls

    if(s[0] == t[0]) {
        return 1 + lcs(s.substr(1) , t.substr(1));

    }
    else{
        int a = lcs(s.substr(1),t);
        int b = lcs(s,t.substr(1));
        int c = lcs(s.substr(1) , t.substr(1));

        return max(a,max(b,c));
    }
}

int main() {
    string s,t;
    cin >> s >> t;

    cout << lcs(s,t) << endl;
    cout << lcs_mem(s,t) << endl;
    cout << lcs_DP(s,t) << endl;
}