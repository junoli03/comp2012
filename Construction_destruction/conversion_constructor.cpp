//
// Created by Juno on 19/2/2024.
//

#include <iostream>
using namespace std;

class A {
    int a;
public:
    A(int aa, int bb = 20) {
        cout << "Constructor called" << endl;
        cout << "aa = " << aa << endl;
        cout << "bb = " << bb << endl;
    }
};


int main() {
    A obj(10);
    A obj2 = 10;        /// This one is not good, this is not efficient.
    A obj3 {10};
    /// The previous 3 lines of code are doing the same things.
}