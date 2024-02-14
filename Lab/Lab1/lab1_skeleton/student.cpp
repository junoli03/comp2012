#include "student.h"

// TODO 1: Implement CourseGrade::getTotalPercentage().
// Calculate the total score based on the component portions,
// i.e. total = LAB_PERCENTAGE * labs + ...
double CourseGrade::getTotalPercentage() const {
    // TODO
    return labs * LAB_PERCENTAGE + assignments * ASGN_PERCENTAGE + midtermExam * MIDTERM_PERCENTAGE + finalExam * FINAL_PERCENTAGE;
}

// Default constructor is given
Student::Student() {
    name = "";
    SID = 0;
    department = "";
    year = 0;
    grade = {0.0, 0.0, 0.0, 0.0};
}

// TODO 2: Implement Student other constructor.
// Initialize the data members with the specified parameters,
// while 'grade' is initialized to 0 similar to default constructor.
Student::Student(const string& name, int SID, const string& department, int year) {
    // TODO
    this->name = name;
    SID = SID;
    this->department = department;
    year = year;
    grade = {0, 0, 0, 0};

}

// TODO 3: Implement Student mutator function.
void Student::setGrade(const CourseGrade& grade) {
    // TODO
}

// TODO 4: Implement Student accesor functions.
string Student::getName() const { 
    // TODO
}

int Student::getSID() const { 
    // TODO
}

string Student::getDepartment() const { 
    // TODO
}

int Student::getYear() const { 
    // TODO
}

double Student::getTotalPercentage() const { 
    // TODO
}
