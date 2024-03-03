//
// Created by Juno on 14/2/2024.
//

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int& b = a;
    int* c = &b;
    cout << b << endl;
}