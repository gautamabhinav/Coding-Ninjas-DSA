#include <iostream>
using namespace std;
#include "dynamic.cpp"

int main() {
    DynamicArray d1;
    
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);

    d1.print();

    DynamicArray d2(d1);      // copy vonstructor

    DynamicArray d3;
    d3 = d1;                  // shallow copy

    d1.add(0 , 100);
    d2.print();

    d3.print();
}