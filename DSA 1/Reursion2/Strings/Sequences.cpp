#include <iostream>
using namespace std;

int subs(string input , string output[]){
    if(input.size()  == 0){
        output[0] = "";
        return 1;
    }

    string smallString = input.substr(1);
    int smallOutputSize = subs(smallString , output);
    for(int i = 0; i < smallOutputSize ; i++){
        output[i + smallOutputSize] = input[0] + output[i];
    }
    return 2 * smallOutputSize;
}

int main(){
    string input;
    cin >> input;

    string*  output = new string[1000];
    int count = subs(input , output);
    for(int i= 0 ; i < count ; i++){
        cout << output[i] << endl;
    }
}















// Return subsequences of string



// dry run

// i/p :- abc 

// total 2 to the power n option 
// ac subsequence koi bhi character pick kar lo
// ab is substring

// return subsequence

// kya return karege

// string pointer * subsequences(string input)

// abc
// o/p :- [ ] 
// string ka array la ke dede ga 
// par string ka size lake nahi dega 

// int subseq(string input ,string output[]){}

// "abc"

// base case 
// "" ka base case kya ho sakta hai 
// o/p :- [""]

// bc  ka subsequence 

// ""
// "b"
// "c"
// "bc" 

// a 
// ab 
// ac 
// abc 


// ""
// "b"
// "c"
// "bc"
// a 
// ab 
// ac 
// abc 

// 0
// 1
// 2
// 3

// 4
// 5
// 6
// 7

// output

// ""
// "a"
// "b"
// "c"
// "ab"
// "ac"
// "abc"



