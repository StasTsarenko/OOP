#include "Student.h"

using namespace std;

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
