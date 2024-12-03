#include "CourseManager.h"
#include <iostream>
#include <iomanip>

void CourseManager::addCourse(const string& name, const string& instructor, int hours) {
    courses.emplace_back(name, instructor, hours);
}

void CourseManager::removeCourse(const string& name) {
    courses.erase(
        remove_if(courses.begin(), courses.end(),
            [&](const Course& course) { return course.getName() == name; }),
        courses.end());
}

void CourseManager::enrollStudent(const string& courseName, const string& studentName) {
    Course* course = findCourse(courseName);
    if (course) {
        course->addStudent(studentName);
    }
    else {
        cout << "Course \"" << courseName << "\" not found.\n";
    }
}

void CourseManager::listCourses() const {
    cout << "\nCourses List:\n";
    cout << left << setw(20) << "Course Name"
        << setw(20) << "Instructor"
        << setw(10) << "Hours"
        << "Students Enrolled\n";
    cout << string(60, '-') << "\n";
    for (const auto& course : courses) {
        cout << left << setw(20) << course.getName()
            << setw(20) << course.getInstructor()
            << setw(10) << course.getHours()
            << course.studentCount() << "\n";
    }
}

void CourseManager::listStudentsInCourse(const string& courseName) const {
    const Course* course = findCourse(courseName);
    if (course) {
        cout << "\nStudents enrolled in \"" << course->getName() << "\":\n";
        for (const auto& student : course->getStudents()) {
            cout << "- " << student << "\n";
        }
    }
    else {
        cout << "Course \"" << courseName << "\" not found.\n";
    }
}

Course* CourseManager::findCourse(const string& name) {
    for (auto& course : courses) {
        if (course.getName() == name) {
            return &course;
        }
    }
    return nullptr;
}

const Course* CourseManager::findCourse(const string& name) const {
    for (const auto& course : courses) {
        if (course.getName() == name) {
            return &course;
        }
    }
    return nullptr;
}
