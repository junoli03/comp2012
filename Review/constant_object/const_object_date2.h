//
// Created by Juno on 15/2/2024.
//

#ifndef COMP2012_CONST_OBJECT_DATE2_H
#define COMP2012_CONST_OBJECT_DATE2_H

#endif //COMP2012_CONST_OBJECT_DATE2_H

class Date
/* File: const-object-date2.h */
｛
private:
int year, month, day;
public:
Date() { cin >> year >> month >> day; }
Date(int y, int m, int d) { year = y; month = m; day = d; }
void add_month() { month + 1; }; // Will be an inline function int difference(const Date& d) const {/* Incomplete */ } void print() const
{ cout « year « "/" « month « "/" « day « endl; }
｝；