//
// Created by The_J on 3/1/2024.
//
#include <iostream>
#include <typeinfo>
using namespace std;

class A {
public:
    A() { cout << "A()" << endl; }
    A(const A&) { cout << "A(const A&)" << endl; }
    ~A() { cout << "~A()" << endl; }
};

class B : public A {
public:
    B() { cout << "B()" << endl; }
    B(const B&) { cout << "B(const B&)" << endl; }
    ~B() { cout << "~B()" << endl; }
};

int main() {
    A* a = new A;
    cout << typeid(*a).name() << endl;
}

