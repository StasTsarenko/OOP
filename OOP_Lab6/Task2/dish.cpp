#include "dish.h"


Dish::Dish(const string& name, const string& description, double price)
{
    this->name = name;
    this->description = description;
    this->price = price;
}


string Dish::getName() const {
    return name;
}

string Dish::getDescription() const {
    return description;
}

double Dish::getPrice() const {
    return price;
}

void Dish::display() const {
    cout << "Name: " << name << "\nDescription: " << description << "\nPrice: " << price << endl;
}
