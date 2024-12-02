#include "MyString.h"


MyString::MyString(const string& str) : str(str) {}

MyString MyString::operator+(const MyString& other) const {
    return MyString(str + other.str);
}

void MyString::removeCharAt(int pos) {
    str.erase(pos, 1);
}

bool MyString::operator==(const MyString& other) const {
    return str == other.str;
}

MyString::~MyString() {}

void MyString::sortArr(vector<MyString>& strings) {
    sort(strings.begin(), strings.end());

    cout << "Sorted strings:" << endl;
    for (const auto& str : strings) {
        cout << str << endl;
    }
}

bool MyString::operator<(const MyString& other) const {
    return str < other.str;
}

ostream& operator<<(ostream& os, const MyString& obj) {
    os << obj.str;
    return os;
}