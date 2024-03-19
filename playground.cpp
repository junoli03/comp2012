//
// Created by Juno on 14/2/2024.
//

#include <iostream>
#include <iostream>
using namespace std;

int found = 0;

int test () {
    for (int i = 0; i < 5; i++)
    {
//        cout << i << endl;
        if (i == 3){
            found = i;
            return i;
        }
    }
}
int main()
{
    cout << test() << endl;
}