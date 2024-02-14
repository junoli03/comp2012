//
// Created by Juno on 14/2/2024.
//

#include <iostream>
using namespace std;

class A
{
    private:
        int a;
    public:
        int b;
        void haha() { cout << "haha" << endl; };
        int getA() const { return a; };        /// accessor, the const is better to be added in the accessor
        void setA(int aa) { a = aa; };        /// mutator
        void print() const { cout << a << endl;};       /// it is better to add const in the function as there is no change in the function
};