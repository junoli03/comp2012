//
// Created by Juno on 14/2/2024.
//
#include "person.h"
#include <cstring>

Person::Person(const char* my_name, int my_age, Person* my_father, Person* my_mother, Person* my_child)     ///constructor
{
    _name = new char[strlen(my_name) + 1];
    strcpy(_name, my_name);
    _age = my_age;
    _father = my_father;
    _mother = my_mother;
    _child = my_child;
};

Person::~Person()       ///destructor
{
    delete [] _name;
};



