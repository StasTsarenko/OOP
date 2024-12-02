#include <iostream>
#include <string>
#include <vector>
#include "MyString.h"

using namespace std;


int main() {
    MyString s1("Alex");
    MyString s2("Roberto");

    cout << "String s1: " << s1 << endl;
    cout << "String s2: " << s2 << endl;

    MyString s3 = s1 + s2;
    cout << "After concatenate: " << s3 << endl;

    s3.removeCharAt(1); 
    cout << "After delete symb: " << s3 << endl;

    if (s1 == s2) {
        cout << "Strings are equal." << endl;
    }
    else {
        cout << "Strings are not equal." << endl;
    }

    vector<MyString> strings = {s1, s2};

    MyString::sortArr(strings);

    return 0;
}
