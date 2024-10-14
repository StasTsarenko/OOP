#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // для sort

using namespace std;

class MyString {
private:
    string str;

public:

    // Конструктор з параметром
    MyString(const string& input = "");

    // Метод для конкатенації рядків
    MyString concatenate(const MyString& other) const;

    // Метод для вилучення символу з заданої позиції
    void removeCharAt(int pos);

    // Метод для порівняння рядків
    bool compare(const MyString& other) const;

    // Метод для отримання рядка 
    const string& getString() const;

    // Оператор для сравнения
    bool operator<(const MyString& other) const;

    // Статичний метод для сортування та виведення 
    static void sortArr(vector<MyString>& strings);

    // Деструктор
    ~MyString();

};
