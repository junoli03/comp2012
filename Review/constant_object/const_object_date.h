//
// Created by Juno on 15/2/2024.
//

#ifndef COMP2012_CONST_OBJECT_DATE_H
#define COMP2012_CONST_OBJECT_DATE_H

#endif //COMP2012_CONST_OBJECT_DATE_H

class Date
{
    private:
        int year, month, day;

    public:
        Date() { cin >> year >> month >> day; }
        Date(int y,int m,int d){year=y;month=m;day=d;}
        void add_month() { month += 1; }; // Will be an inline function
        int difference(const Date& d)
        { /* Incomplete: write this function */ }
        void print()
        { cout << year << "/" << month << "/" << day << endl; }

};