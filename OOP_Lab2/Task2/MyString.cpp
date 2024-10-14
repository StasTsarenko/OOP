#include "MyString.h"


// �����������
MyString::MyString(const string& input) : str(input.empty() ? "Default" : input) {}

// ����� ��� ������������ �����
MyString MyString::concatenate(const MyString& other) const {
    return MyString(str + other.str);
}

// ����� ��� ��������� ������� � ������ �������
void MyString::removeCharAt(int pos) {
    str.erase(pos, 1);
}

// ����� ��� ��������� �����
bool MyString::compare(const MyString& other) const {
    return str == other.str;
}

// ����� ��� ��������� ����� 
const string& MyString::getString() const {
    return str;
}

// ����������
MyString::~MyString() {}

// ��������� ����� ��� ���������� �� ��������� �����
void MyString::sortArr(vector<MyString>& strings) {
    sort(strings.begin(), strings.end());

    cout << "Sorted strings:" << endl;
    for (const auto& str : strings) {
        cout << str.getString() << endl;
    }
}

// �������� ��� ���������
bool MyString::operator<(const MyString& other) const {
    return str < other.str;
}