#ifndef MENUITEM_H
#define MENUITEM_H
#include <string>
#include <iostream>
#include "MenuComponent.h"

class MenuItem : public MenuComponent {
public:
    explicit MenuItem(std::string nm, std::string desc, bool vege, double pric):
        name(nm), description(desc), vegetarian(vege), price(pric) {}
    
    std::string GetName() const override
    {
        return name;
    }

    std::string GetDescription() const override
    {
        return description;
    }

    double GetPrice() const override
    {
        return price;
    }

    bool IsVegetarian() const override
    {
        return vegetarian;
    }

    void Print() const override
    {
        std::cout << "  " << GetName();
        if (IsVegetarian()) {
            std::cout << "(v)";
        }
        std::cout << ", " << GetPrice() << std::endl;
        std::cout << "    -- " << GetDescription() << std::endl;
    }

private:
    std::string name;
    std::string description;
    double price;
    bool vegetarian;
};

#endif