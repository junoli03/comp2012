//
// Created by The_J on 3/4/2024.
//
#include <iostream>
#include <cstring>
using namespace std;

class Word
{
private:
    int frequency;
    char* str;
public:
    Word(const char* s, int f = 1)
    {
        frequency = f;
        str = new char [strlen(s) + 1];
        strcpy(str, s);
        cout << "conversion" << endl;
    }

    Word(const Word& w) : Word(w.str, w.frequency)
    {
        cout << "copy" << endl;
    }
    void print() const { cout << str << " : " << frequency << endl;}

};

int main() {
    Word movie("Titanic"); movie.print();
    Word song(movie); song.print();
    Word ship = movie; ship.print();
}