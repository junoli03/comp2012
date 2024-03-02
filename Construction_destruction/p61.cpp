//
// Created by The_J on 3/1/2024.
//
#include <iostream>
using namespace std;

class A
{
    int a;
public:
    A(int z) : a(z) { cout << "call A's constructor: " << a << endl; }
    ~A() { cout << "call A's destructor: " << a << endl; }
    int get() const { return a; }

};

class B
{
    int b1 = 999;
    A b2 = 10;
    A b3  {100};
public:
    B() { cout << "call B's constructor: " << endl << endl; }
    ~B() { cout << "call B's destructor: " << b1 << "\t" << b2.get() << "\t" << b3.get() << endl; }
    int get() const { return b1; }
};
int main()
{
    B x;
    return 0;
}