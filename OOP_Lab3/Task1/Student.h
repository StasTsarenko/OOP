#pragma once
#include<string>
#include<iostream>
using namespace std;

class Student
{
private:
	string name;
	int age;
	string major;

public:
	void SetName(string newName);
	void SetAge(int newAge);
	void SetMajor(string newMajor);

	string GetName();
	int GetAge();
	string GetMajor();
};