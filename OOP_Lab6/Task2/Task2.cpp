#include <iostream>
#include "dish.h"
#include "Menu.h"

using namespace std;

int main() {
    Menu<Dish> restMenu;

    restMenu.addDish(Dish("Pizza", "Tomato sauce, mozzarella, meat", 150.0));
    restMenu.addDish(Dish("Mushroom Soup", "Mushroom soup with vegetables", 80.0));
    restMenu.addDish(Dish("Beef Steak", "Beef steak with vegetables", 300.0));

    restMenu.displayAll();

    restMenu.findDishes(150.0);

    restMenu.removeDish("Mushroom Soup");

    restMenu.displayAll();

    return 0;
}
