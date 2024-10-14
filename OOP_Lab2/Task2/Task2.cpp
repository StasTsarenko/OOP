#include <iostream>
#include <string>
#include <vector>
#include "MyString.h"

using namespace std;


int main() {
    // Створення об'єктів String
    MyString s1;
    MyString s2("Alex");
    MyString s3("Roberto");
    
    // За замовч
    cout << "Default constructor: " << s1.getString() << endl;
    // Конкатенація рядків
    MyString s4 = s2.concatenate(s3);
    cout << "After con: " << s4.getString() << endl;

    // Вилучення символу з рядка
    s4.removeCharAt(1); // Видаляємо другий символ 
    cout << "After delete symb: " << s4.getString() << endl;

    // Порівняння рядків
    bool  equal = s2.compare(s3);
    cout << "Strings are same?: " << (equal ? "Yes" : "No") << endl;

    // Вектор для зберігання об'єктів MyString
    vector<MyString> strings = { s1, s2, s3 };

    // Виклик статичного методу для сортування та виведення рядків
    MyString::sortArr(strings);

    return 0;
}
