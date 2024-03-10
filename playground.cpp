//
// Created by Juno on 14/2/2024.
//

#include <iostream>
using namespace std;



int main() {
    const int** ptr = new int const*;
    *ptr = new int;
    int b = 10;
    **ptr = &b;
}