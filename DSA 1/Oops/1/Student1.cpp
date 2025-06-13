#include <bits/stdc++.h>
using namespace std;
#include "student.cpp"

int main(){

    Student s1(10 , 1001);
    cout << "Address of s1 : " << &s1 << endl;

    Student s2(20);
    s2.display();
    
    /*
    Student s1;

    s1.display();

    Student s2;

    Student *s3 = new Student;
    s3 -> display();

    cout << "Paremetrized Constructor Demo " << endl;
    Student s4(10);
    s4.display();

    Student *s5 = new Student(105);
    s5 -> display();

    Student s6(10 , 1002);
    s6.display();

    */
}