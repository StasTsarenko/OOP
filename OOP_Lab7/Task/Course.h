#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
using namespace std;

class Course {
public:
    Course(const string& courseName, const string& courseInstructor, int courseHours);

    void addStudent(const string& studentName);
    void removeStudent(const string& studentName);
    int studentCount() const;

    string getName() const;
    string getInstructor() const;
    int getHours() const;
    const vector<string>& getStudents() const;

private:
    string name;
    string instructor;
    int hours;
    vector<string> students;
};

#endif // COURSE_H
