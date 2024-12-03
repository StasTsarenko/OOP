#include "Course.h"
#include <algorithm>

Course::Course(const string& name, const string& instructor, int hours) {
    this->name = name;
    this->instructor = instructor;
    this->hours = hours;
}
    

void Course::addStudent(const string& studentName) {
    students.push_back(studentName);
}

void Course::removeStudent(const string& studentName) {
    students.erase(remove(students.begin(), students.end(), studentName), students.end());
}

int Course::studentCount() const {
    return students.size();
}

string Course::getName() const {
    return name;
}

string Course::getInstructor() const {
    return instructor;
}

int Course::getHours() const {
    return hours;
}

const vector<string>& Course::getStudents() const {
    return students;
}
