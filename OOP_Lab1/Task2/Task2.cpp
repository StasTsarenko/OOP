#include <iostream>
#include <string>

using namespace std;

int main() {
	struct Student {
		string name;
		int age;
		string major;
	};

	Student student;

	student.name = "Roberto";
	student.age = 25;
	student.major = "KB-21";

	cout << "Name: " << student.name << endl;
	cout << "Age: " << student.age << endl;
	cout << "Major: " << student.major << endl;
}