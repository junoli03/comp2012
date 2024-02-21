//
// Created by Juno on 19/2/2024.
//
class A
{
    int a;
public:
    A(int aa  = 10, int bb = 20) {}     /// This is a default constructor
};

int main()
{
    A obj;      ///If you want to call the constructor, we cannot use () to call the constructor, like next line:
//    A obj();  /// This line of code cannot call the default constructor.
}