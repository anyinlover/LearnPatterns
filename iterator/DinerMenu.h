#ifndef DINERMENU_H
#define DINERMENU_H
#include <memory>
#include <iostream>
#include <array>
#include "MenuItem.h"
#include "DinerMenuIterator.h"


class DinerMenu {
public:
    DinerMenu()
    {
        AddItem("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99);
        AddItem("BLT", "Bacon with lettuce & tomato on whole wheat", false, 2.99);
        AddItem("Soup of the day", "Soup of the day, with a side of potato salad", false, 3.29);
        AddItem("Hotdog", "A hot dog, with sauerkraut, relish, onions, topped with cheese", false, 3.05);
        AddItem("Steamed Veggies and Brown Rice", "Steamed vegetables over brown rice", true, 3.99);
        AddItem("Pasta", "Spaghetti with Marinara Sauce, and a slice of sourdough bread", true, 3.89);
    }

    void AddItem(std::string name, std::string description, bool vegeterian, double price)
    {
        if (numberOfItems >= MAX_ITEMS) {
            std::cerr << "Sorry, menu is full! Can't add item to menu" << std::endl;
        } else {
            menuItems[numberOfItems++] = std::make_unique<MenuItem>(name, description, vegeterian, price);
        }
    }

    std::unique_ptr<Iterator> CreateIterator()
    {
        return std::make_unique<DinerMenuIterator>(menuItems);
    }

private:
    static const int MAX_ITEMS = 6;
    int numberOfItems = 0;
    std::array<std::unique_ptr<MenuItem>, MAX_ITEMS> menuItems;
};

#endif