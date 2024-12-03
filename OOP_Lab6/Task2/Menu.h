#ifndef MENU_H
#define MENU_H

#include <vector>
#include <algorithm>
#include "Dish.h"

using namespace std;


template<typename T>
class Menu {
private:
    vector<T> dishes; 

public:
    
    void addDish(const T& dish) {
        dishes.push_back(dish);
    }

    
    void removeDish(const string& name) {
        auto it = remove_if(dishes.begin(), dishes.end(), [&name](const T& dish) {
            return dish.getName() == name;
            });
        if (it != dishes.end()) {
            dishes.erase(it, dishes.end());
            cout << "The dish \"" << name << "\" successfully removed." << endl;
        }
        else {
            cout << "The dish \"" << name << "\" was not found in menu." << endl;
        }
    }

    void displayAll() const {
        cout << "List of all dishes:" << endl;
        for (const T& dish : dishes) {
            dish.display();
        }
    }

    void findDishes(double price) const {
        cout << "Dishes with the price " << price << ":" << endl;
        bool found = false;
        for (const T& dish : dishes) {
            if (dish.getPrice() == price) {
                dish.display();
                found = true;
            }
        }
        if (!found) {
            cout << "No dishes with price " << price << endl;
        }
    }
};

#endif // MENU_H
