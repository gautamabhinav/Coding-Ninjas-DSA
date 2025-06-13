#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
	
    int basic;
    char grade;
    double da,pf,hra,totalsalary,allowance;
    int ans;
    
    cin>>basic>>grade;
    
    hra= basic*(20.0)/100;
    da= basic*(50.0)/100;
    pf= basic*(11.0)/100;
    
    
    if(grade== 'A'){
    	allowance=1700;
    }
    
	else if(grade== 'B'){
    	allowance=1500;
    }
	else{
    	allowance=1300;
    }
       totalsalary=basic+hra+da+allowance-pf;
     ans = round(totalsalary);
    cout<<ans;
}

#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int basic;
    char grade;

    double pf,hra,da,allowance,totalsalarly;
    int ans;

    cin>>basic>>grade;

    hra=basic*(20.0)/100;
    da=basic*(50.0)/100;
    pf=basic*(11.0)/100;

    if(grade=='A')
        allowance=1700;

    else if(grade=='B')
        allowance=1700;

    else
        allowance=1700;

    totalsalarly=basic+hra+da+allow-pf;
    ans=round(totalsalarly);
    
    cout<<ans;
}