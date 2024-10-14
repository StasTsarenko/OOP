#include "MyString.h"


// Конструктор
MyString::MyString(const string& input) : str(input.empty() ? "Default" : input) {}

// Метод для конкатенації рядків
MyString MyString::concatenate(const MyString& other) const {
    return MyString(str + other.str);
}

// Метод для вилучення символу з заданої позиції
void MyString::removeCharAt(int pos) {
    str.erase(pos, 1);
}

// Метод для порівняння рядків
bool MyString::compare(const MyString& other) const {
    return str == other.str;
}

// Метод для отримання рядка 
const string& MyString::getString() const {
    return str;
}

// Деструктор
MyString::~MyString() {}

// Статичний метод для сортування та виведення рядків
void MyString::sortArr(vector<MyString>& strings) {
    sort(strings.begin(), strings.end());

    cout << "Sorted strings:" << endl;
    for (const auto& str : strings) {
        cout << str.getString() << endl;
    }
}

// Оператор для порівняння
bool MyString::operator<(const MyString& other) const {
    return str < other.str;
}