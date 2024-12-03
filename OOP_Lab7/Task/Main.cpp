#include "CourseManager.h"
#include <iostream>
using namespace std;

int main() {
    CourseManager manager;

    manager.addCourse("Mathematics", "Dr. Smith", 30);
    manager.addCourse("Physics", "Dr. Johnson", 40);
    manager.addCourse("Computer Science", "Dr. Brown", 50);

    manager.listCourses();

    manager.enrollStudent("Mathematics", "Ben");
    manager.enrollStudent("Mathematics", "Bob");
    manager.enrollStudent("Physics", "Charlie");
    manager.enrollStudent("Computer Science", "Roberto");

    manager.listCourses();

    manager.listStudentsInCourse("Mathematics");

    manager.removeCourse("Physics");

    manager.listCourses();

    return 0;
}
