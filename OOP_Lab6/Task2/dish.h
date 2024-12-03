#ifndef DISH_H
#define DISH_H

#include <string>
#include <iostream>

using namespace std;

class Dish {
private:
    string name; 
    string description; 
    double price; 

public:
    Dish(const string& name, const string& description, double price);

    string getName() const;
    string getDescription() const;
    double getPrice() const;

    void display() const;
};

#endif // DISH_H
