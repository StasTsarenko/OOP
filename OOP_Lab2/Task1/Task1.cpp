#include<iostream>
#include<string>
#include "Student.h"

using namespace std;


int main() {

	Student student1;  // за замовчуванням
	
	cout << "Name: " << student1.GetName() << "\nAge: " << student1.GetAge() << "\nMajor: " << student1.GetMajor() << endl;


	Student student2("Roberto", 21, "KB-23"); // з параметрами
	
	cout << endl << "Name: " << student2.GetName() << "\nAge: " << student2.GetAge() << "\nMajor: " << student2.GetMajor() << endl;


	Student student3 = student1; // Копіюючий 

	cout << endl << "Name: " << student3.GetName() << "\nAge: " << student3.GetAge() << "\nMajor: " << student3.GetMajor() << endl;

	return 0;
}