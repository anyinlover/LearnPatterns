#ifndef MENUCOMPONENT_H
#define MENUCOMPONENT_H
#include <memory>
#include <string>

class MenuComponent {
public:
    virtual ~MenuComponent() = default;
    virtual void Add(std::shared_ptr<MenuComponent> menuComponent) {};
    virtual void Remove(std::shared_ptr<MenuComponent> menuComponent) {};
    virtual std::shared_ptr<MenuComponent> GetChild(int i) const {return nullptr;}
    virtual std::string GetName() const = 0;
    virtual std::string GetDescription() const = 0;
    virtual double GetPrice() const {return 0.0;}
    virtual bool IsVegetarian() const {return true;}
    virtual void Print() const = 0;
};

#endif