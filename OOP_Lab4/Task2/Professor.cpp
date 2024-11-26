#include "Professor.h"
#include <iostream>

Professor::Professor(const string& name, int age, char gender, const string& position, const string& subject) {
    setName(name);
    setAge(age);
    setGender(gender);
    setPosition(position);
    setSubject(subject);
}

void Professor::displayInfo() {
    cout << "Professor Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Gender: " << gender << endl;
    cout << "Position: " << position << endl;
    cout << "Subject: " << subject << endl;
}

void Professor::setPosition(const string& position) {
    if (position.empty()) {
        throw invalid_argument("Position cannot be empty.");
    }
    this->position = position;
}

void Professor::setSubject(const string& subject) {
    if (subject.empty()) {
        throw invalid_argument("Subject cannot be empty.");
    }
    this->subject = subject;
}

string Professor::getPosition() {
    return position;
}

string Professor::getSubject() {
    return subject;
}
