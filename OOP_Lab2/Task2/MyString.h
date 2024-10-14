#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // ��� sort

using namespace std;

class MyString {
private:
    string str;

public:

    // ����������� � ����������
    MyString(const string& input = "");

    // ����� ��� ������������ �����
    MyString concatenate(const MyString& other) const;

    // ����� ��� ��������� ������� � ������ �������
    void removeCharAt(int pos);

    // ����� ��� ��������� �����
    bool compare(const MyString& other) const;

    // ����� ��� ��������� ����� 
    const string& getString() const;

    // �������� ��� ���������
    bool operator<(const MyString& other) const;

    // ��������� ����� ��� ���������� �� ��������� 
    static void sortArr(vector<MyString>& strings);

    // ����������
    ~MyString();

};
