#include <iostream>
using namespace std;

int main(){

    // dynamically

    string* sp = new string;   
    *sp = "def";
    cout << sp << endl;
    cout << *sp << endl;

    //statically

    string s = "abc" ;
    //cin >> s;
    //cout << s <<endl;
    //getline(cin , s);
    cout << s <<endl;

    //change the content
    s = "defdef";
    cout << s[0] << endl;     // character - wise change kar sakte hau
    s[0] = 'a';
    string s1;
    s1 = "def";

    string s2 = s + s1;    //string ko concate kar sakete hai
    cout << s2 << endl;

    s += s1;                  // += use kar sakte hai


    cout << s1 <<endl; 
    cout << s << endl;

    cout << s.size() << endl;
    cout << s.substr(3) << endl;        // substring use kar sakte hai
    cout << s.substr(3 , 3) << endl;    // s2 = s.substr(si , length);

    cout << s.find("def") << endl;      // find use kar sakte hai

}