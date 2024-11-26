#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"


class Professor : public Person {
private:
    string position;
    string subject;

public:
    Professor(const string& name, int age, char gender, const string& position, const string& subject);

    void displayInfo() override;

    void setPosition(const string& position);
    void setSubject(const string& subject);

    string getPosition();
    string getSubject();
};

#endif // PROFESSOR_H
