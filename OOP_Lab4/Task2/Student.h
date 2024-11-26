#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
private:
    int course;
    string specialty;

public:
    Student(const string& name, int age, char gender, int course, const string& specialty);

    void displayInfo() override;

    void setCourse(int course);
    void setSpecialty(const string& specialty);

    int getCourse();
    string getSpecialty();
};

#endif // STUDENT_H
