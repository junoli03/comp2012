//
// Created by Juno on 14/2/2024.
//

#include <iostream>
#include <iostream>
using namespace std;

class A{
public:
    A(){cout<<"a cons"<<endl;}
    ~A(){cout<<"des"<<endl;}
};

int main()
{
    A AA;
    A bb =A();
    cout << "juju" << endl;
    AA = A();
    return 0;
}