//
// Created by Juno on 14/2/2024.
//

#include <iostream>
using namespace std;

class A {
private:
    int a;
public:
    A() {};
    A(const A& obj) {
        a = obj.a;
        cout << "Copy constructor called" << endl;
    }
};

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "i = " << i << endl;
    }
    A haha;
    A hehe(haha);

}