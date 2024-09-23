#include<iostream>
#include<string>
#include "Student.h"

using namespace std;


void main() {

	Student student;
	string name, major;
	int age;

	cout << "Please enter name: " << endl;
	cin >> name;
	cout << "Please enter age: " << endl;
	do {
		cin >> age;
	} while (age <= 6);
	cout << "Please enter major: " << endl;
	cin >> major;

	student.SetName(name);
	student.SetAge(age);
	student.SetMajor(major);

	cout << endl << "Name: " << student.GetName() << "\nAge: " << student.GetAge() << "\nMajor: " << student.GetMajor() << endl;
}