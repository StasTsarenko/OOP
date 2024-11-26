#include <iostream>
#include "Student.h"
#include "Professor.h"

using namespace std;

int main() {
    try {
        
        try {
            Student student("Ben", 20, 'M', 2, "Computer Science");
            student.displayInfo();
        }
        catch (const invalid_argument& e) {
            cerr << "Error creating student: " << e.what() << endl;
        }

        cout << endl;

        try {
            Professor professor("Maria", 40, 'F', "Professor", "Mathematics");
            professor.displayInfo();
        }
        catch (const invalid_argument& e) {
            cerr << "Error creating professor: " << e.what() << endl;
        }

    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
