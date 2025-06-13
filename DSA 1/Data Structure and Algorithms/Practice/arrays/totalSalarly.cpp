#include <bits/stdc++.h>
using namespace std;

int main(){
    int basic;
    char grade;

    double pf,hra,da,allowance,totalSalarly;
    int ans;

    cin>>basic>>grade;

    hra=basic * (20.0)/100;
    da= basic * (50.0)/100;
    pf=basic * (11.0)/100

    if(grade== 'A'){
        allowance=1700;
    }
    else if(grade== 'B'){
        allowance=1500;
    }
    else{
        allowance=1300;
    }

    totalSalarly=basic+hra+da+allowance-pf;
    ans=round(totalSalarly);

    cout<<ans;
}