#include <bits/stdc++.h>
using namespace std;

int main(){
    int R,C;
    cin>>R>>C;

    int arr[R][C];

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin>>arr[i][j];
        }
    }

    for(int j=0;j<C;j++){
        int sum=0;
        for(int i=0;i<R;i++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
}






#include <bits/stdc++.h>
using namespace std;

int main(){
    int R,C;
    cin>>R>>C;

    int arr[R][C];

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin>>arr[i][j];
        }
    }

    for(int j=0;j<C;j++){
        int sum=0;
        for(int i=0;i<R;i++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
}