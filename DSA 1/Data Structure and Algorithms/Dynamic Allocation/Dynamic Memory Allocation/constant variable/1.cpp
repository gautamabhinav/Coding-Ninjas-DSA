// constant reference

#include <bits/stdc++.h>
using namespace std;

int main(){

    /*const int i =10;
     i = 12;
     print error
    */

    /* const int i;
     i = 10;

     gives two error
    */

    // const int from a non const integer
    const int i = 10;                        // both const are same;
    int const i2 = 10;

    // constant reference
    int j = 12;
    const int &k = j;
    //k++;                                  // you shold not do k++; gives error
    j++;

    cout << k << endl;
    // PATH IS CONSTANT AND ACTUAL STORAGE IS NOT CONSTANT;

    //constant reference from a constant int

    int const j2 = 12;
    int const &k2 = j2;

    /*
    j2++;                          // gives error
    k2++;
    */

   //reference from a const integer
   int const j3 = 123;
   int &k3 = j3;
   k3++;

}