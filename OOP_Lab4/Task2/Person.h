#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

using namespace std;

class Person {
protected:
    string name;
    int age;
    char gender;

public:
    virtual ~Person() {}
    virtual void displayInfo() = 0;

    void setName(const string& name);
    void setAge(int age);
    void setGender(char gender);

    string getName();
    int getAge();
    char getGender();
};

#endif // PERSON_H
