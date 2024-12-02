#include <iostream>
#include "Fraction.h"

using namespace std;

int main() {
    try {
        Fraction f1(1, 2);
        Fraction f2(3, 4);
        Fraction f3(-2, 5);

        cout << "f1: " << f1 << "\n";
        cout << "f2: " << f2 << "\n";
        cout << "f3: " << f3 << "\n";

        cout << "f1 + f2 = " << f1 + f2 << "\n";
        cout << "f1 - f2 = " << f1 - f2 << "\n";
        cout << "f1 * f3 = " << f1 * f3 << "\n";
        cout << "f1 / f2 = " << f1 / f2 << "\n";


        if (f1 == f2) {
            cout << "f1 == f2: true\n";
        }
        else {
            cout << "f1 == f2: false\n";
        }

        if (f1 != f3) {
            cout << "f1 != f3: true\n";
        }
        else {
            cout << "f1 != f3: false\n";
        }
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << "\n";
    }

    return 0;
}
