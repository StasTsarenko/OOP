#include <iostream>
#include "Details.h"
#include "Address.h"
#include "University.h"

using namespace std;

int main() {
    string name, major, street, city, universityName;
    int age;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter student age: ";
    cin >> age;

    cout << "Enter student major: ";
    cin >> major;

    cout << "Enter address (street): ";
    cin >> street;

    cout << "Enter address (city): ";
    cin >> city;

    cout << "Enter university name: ";
    cin >> universityName;

    Address address(street, city);
    University university(universityName);

    Details details(address, university);
    details.SetName(name);
    details.SetAge(age);
    details.SetMajor(major);

    cout << "\nStudent Details:" << endl;
    cout << "Name: " << details.GetName() << endl;
    cout << "Age: " << details.GetAge() << endl;
    cout << "Major: " << details.GetMajor() << endl;
    cout << "Address: " << details.GetAddress().GetStreet() << ", " << details.GetAddress().GetCity() << endl;
    cout << "University: " << details.GetUniversity().GetName() << endl;

    return 0;
}
