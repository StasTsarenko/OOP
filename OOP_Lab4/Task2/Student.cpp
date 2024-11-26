#include "Student.h"
#include <iostream>

Student::Student(const string& name, int age, char gender, int course, const string& specialty) {
    setName(name);
    setAge(age);
    setGender(gender);
    setCourse(course);
    setSpecialty(specialty);
}

void Student::displayInfo() {
    cout << "Student Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Gender: " << gender << endl;
    cout << "Course: " << course << endl;
    cout << "Specialty: " << specialty << endl;
}

void Student::setCourse(int course) {
    if (course < 1 || course > 6) {
        throw invalid_argument("Invalid course number. It must be between 1 and 6.");
    }
    this->course = course;
}

void Student::setSpecialty(const string& specialty) {
    if (specialty.empty()) {
        throw invalid_argument("Specialty cannot be empty.");
    }
    this->specialty = specialty;
}

int Student::getCourse() {
    return course;
}

string Student::getSpecialty() {
    return specialty;
}
