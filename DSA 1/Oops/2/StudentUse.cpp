#include <bits/stdc++.h>
using namespace std;
#include "Student.cpp"

int main(){

    //create Objects Statically
    Student s1;
    Student s2;

    Student s3,s4,s5;

    //s1.age = 24;
    s1.rollNo = 101;

    //cout << "S1 age : " <<  s1.age << endl;
    cout << "S1 age : " <<  s1.getAge() << endl;
    cout << s1.rollNo << endl;

    s1.display();
    s2.display();

    //s2.age = 30;

    //Create Objects Dynamically
    Student *s6 = new Student;

    //(*s6).age = 23;
    (*s6).rollNo = 105;
    (*s6).display();

    cout << "S6 Age :"<< s6->getAge() << endl;

    //s6 -> age = 12;
    s6 -> rollNo = 102;
    s6 -> display();





}