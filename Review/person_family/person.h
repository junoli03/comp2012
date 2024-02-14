//
// Created by Juno on 14/2/2024.
//

#ifndef COMP2012_PERSON_H
#define COMP2012_PERSON_H

#endif //COMP2012_PERSON_H

#include <iostream> using namespace std;
/* File: person.h */
class Person
{
private:
    char* _name;
    int _age;
    Person *_father, *_mother, *_child;
public:
    Person (const char* my_name, int my_age, Person* my_father = nullptr,
            Person* my_mother = nullptr, Person* my_child = nullptr);       /// constructor
    ~Person() ;     /// destructor, in the destructor, the parameter should be empty! empty! empty!
                    /// There is no way to do the function overloading, so there is only one destructor.

    Person* father() const;        ///this is the accessor
    Person* mother () const;       ///this is the accessor
    Person* child() const;         ///this is the accessor
    void print_age () const;
    void print_name() const;
    void print_family() const;
    void have_child(Person* baby) ;     /// this is the mutator function
};