#include "Person.h"
#include <iostream>


void Person::setName(const string& name) {
    if (name.empty()) {
        throw invalid_argument("Name cannot be empty.");
    }
    this->name = name;
}

void Person::setAge(int age) {
    if (age <= 0 || age >= 100) {
        throw invalid_argument("Invalid age. Age must be between 1 and 99.");
    }
    this->age = age;
}

void Person::setGender(char gender) {
    if (gender != 'M' && gender != 'F') {
        throw invalid_argument("Invalid gender. Use 'M' for Male or 'F' for Female.");
    }
    this->gender = gender;
}

string Person::getName() {
    return name;
}

int Person::getAge() {
    return age;
}

char Person::getGender() {
    return gender;
}
