#include<string>
#include<iostream>
using namespace std;

#pragma once
class Student
{
private:
	string name;
	int age;
	string major;

public:
	Student(); // Конструктор за замовчуванням
	Student(string name, int age, string major); // Конструктор з параметрами
	Student(const Student& other); // Копіюючий конструктор
	~Student(); // Деструктор

	void SetName(string newName);
	void SetAge(int newAge);
	void SetMajor(string newMajor);

	string GetName();
	int GetAge();
	string GetMajor();
};

