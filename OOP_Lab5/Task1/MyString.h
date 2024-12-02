#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

class MyString {
private:
    string str;

public:

    MyString(const string& input = "");

    MyString operator+(const MyString& other) const;

    void removeCharAt(int pos);

    bool operator==(const MyString& other) const;

    friend ostream& operator<<(ostream& os, const MyString& obj);

    bool operator<(const MyString& other) const;

    static void sortArr(vector<MyString>& strings);

    ~MyString();

};
