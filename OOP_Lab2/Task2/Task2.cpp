#include <iostream>
#include <string>
#include <vector>
#include "MyString.h"

using namespace std;


int main() {
    // ��������� ��'���� String
    MyString s1;
    MyString s2("Alex");
    MyString s3("Roberto");
    
    // �� ������
    cout << "Default constructor: " << s1.getString() << endl;
    // ������������ �����
    MyString s4 = s2.concatenate(s3);
    cout << "After con: " << s4.getString() << endl;

    // ��������� ������� � �����
    s4.removeCharAt(1); // ��������� ������ ������ 
    cout << "After delete symb: " << s4.getString() << endl;

    // ��������� �����
    bool  equal = s2.compare(s3);
    cout << "Strings are same?: " << (equal ? "Yes" : "No") << endl;

    // ������ ��� ��������� ��'���� MyString
    vector<MyString> strings = { s1, s2, s3 };

    // ������ ���������� ������ ��� ���������� �� ��������� �����
    MyString::sortArr(strings);

    return 0;
}
