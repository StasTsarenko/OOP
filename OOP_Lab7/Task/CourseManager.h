#ifndef COURSE_MANAGER_H
#define COURSE_MANAGER_H

#include "Course.h"
#include <vector>
using namespace std;

class CourseManager {
public:
    void addCourse(const string& name, const string& instructor, int hours);
    void removeCourse(const string& name);
    void enrollStudent(const string& courseName, const string& studentName);
    void listCourses() const;
    void listStudentsInCourse(const string& courseName) const;

private:
    vector<Course> courses;

    Course* findCourse(const string& name);
    const Course* findCourse(const string& name) const;
};

#endif // COURSE_MANAGER_H
