#include<iostream>
#include<string>
#include "Student.h"

using namespace std;

// Конструктор за замовчуванням
Student::Student() {
	name = "Bob";
	age = 18;
	major = "KI-20";
}

// Конструктор з параметрами
Student::Student(string name, int age, string major) {
	this->name = name;
	this->age = age;
	this->major = major;
}

// Копіюючий конструктор
Student::Student(const Student& other) {
	name = other.name;
	age = other.age;
	major = other.major;
}

// Деструктор
Student::~Student() {
	cout << endl << "Destructor!" << endl;
}

void Student::SetName(string newName)
{
	this->name = newName;
}
void Student::SetAge(int newAge)
{
	this->age = newAge;
}
void Student::SetMajor(string newMajor)
{
	this->major = newMajor;
}

string Student::GetName()
{
	return name;
}
int Student::GetAge()
{
	return age;
}
string Student::GetMajor()
{
	return major;
}

