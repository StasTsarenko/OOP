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
	Student(); // ����������� �� �������������
	Student(string name, int age, string major); // ����������� � �����������
	Student(const Student& other); // �������� �����������
	~Student(); // ����������

	void SetName(string newName);
	void SetAge(int newAge);
	void SetMajor(string newMajor);

	string GetName();
	int GetAge();
	string GetMajor();
};

