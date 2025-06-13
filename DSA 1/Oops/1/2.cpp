#include <bits/stdc++.h>
using namespace std;
#include "Student.cpp"

int main(){
    Student s1; // constructor 1 called;

    Student s2(101);  // Constructor 2 called

    Student s3(20 , 102);   // Constructor 3 called

    Student s4(s3);          // Copy Constructor

    s1 = s2;                 // copy Assignment Operator

    Student s5 = s4;         // copy Constructor                             // at the compiler Student s5(s4)

    

}