#ifndef MENUITEM_H
#define MENUITEM_H
#include <string>

class MenuItem {
public:
    explicit MenuItem(std::string nm, std::string desc, bool vege, double pric):
        name(nm), description(desc), vegetarian(vege), price(pric) {}
    
    std::string GetName()
    {
        return name;
    }

    std::string GetDescription()
    {
        return description;
    }

    double GetPrice()
    {
        return price;
    }

    bool IsVegetarian()
    {
        return vegetarian;
    }

private:
    std::string name;
    std::string description;
    double price;
    bool vegetarian;
};

#endif