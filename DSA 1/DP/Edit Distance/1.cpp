#include <bits/stdc++.h>
using namespace std;

int editDistance_Dp(string s1, string s2){
    int n = s1.length();
    int m = s2.length();
    int** arr = new int*[n+1];
    for(int i=0; i<=n; i++){
        arr[i] = new int[m+1];
    }
    for(int j=0; j<=m; j++){
        arr[0][j] = j;
    }
    for(int i=1; i<=n; i++){
        arr[i][0] = i;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(s1[n-i] == s2[m-j]){
                arr[i][j] = arr[i-1][j-1];
            } else {
                int ans1 = 1 + arr[i-1][j];
                int ans2 = 1 + arr[i][j-1];
                int ans3 = 1 + arr[i-1][j-1];
                arr[i][j] = min(ans1, min(ans2, ans3));
            }
        }
    }
    return arr[n][m];
}

int editDistanceRec(string s1, string s2, int** arr) {
    int n = s1.size();
    int m = s2.size();
    if(n == 0 || m == 0){
        return max(n, m);
    } 

    if(arr[n][m] != -1){
        return arr[n][m];
    }

    if(s1[0] == s2[0]){
        arr[n][m] = editDistanceRec(s1.substr(1), s2.substr(1), arr);
    } else{
        int ans1 = 1 + editDistanceRec(s1.substr(1), s2, arr);
        int ans2 = 1 + editDistanceRec(s1, s2.substr(1), arr);
        int ans3 = 1 + editDistanceRec(s1.substr(1), s2.substr(1), arr);
        arr[n][m] = min(ans1, min(ans2, ans3));
    }
    return arr[n][m];
}
int editDistance(string s1, string s2){
    int n = s1.length();
    int m = s2.length();
    int** arr = new int*[n+1];
    for(int i=0; i<=n; i++){
        arr[i] = new int[m+1];
        for(int j=0; j<=m; j++){
            arr[i][j] = -1;
        }
    }
    return editDistanceRec(s1, s2, arr);
}


int editDistance(string s, string t) {

    if(s.size() == 0 || t.size() == 0) {
        return max(s.size() , t.size());
    } 

    if(s[0] == t[0]) {
        return editDistance(s.substr(1) , t.substr(1));
    }
    else{
        //Insert
        int x = editDistance(s.substr(1) ,t) + 1;
        //Delete
        int y = editDistance(s, t.substr(1)) +1;
        //replace
        int z = editDistance(s.substr(1) , t.substr(1)) + 1;

        return min(x,min(y,z));
    }
}

int main() {
    string s = "abcdf";
    string t = "afd";

    cout << editDistance(s,t) << endl;
    cout << editDistance(s1,s2) << endl;
    cout << editDistance_Dp(s,t) << endl;
}