#ifndef DUCK_H
#define DUCK_H

#include <iostream>
#include <memory>
#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck {
public:
    virtual ~Duck() = default;
    virtual void display() const = 0;
    void PerformFly()
    {
        flyBehavior->Fly();
    }

    void PerformQuack()
    {
        quackBehavior->Quack();
    }

    void SetFlyBehavior(std::unique_ptr<FlyBehavior> fb)
    {
        flyBehavior = std::move(fb);
    }

    void SetQuackBehavior(std::unique_ptr<QuackBehavior> qb)
    {
        quackBehavior = std::move(qb);
    }

    void swim()
    {
        std::cout << "All ducks float, even decoys!" << std::endl;
    }

protected:
    std::unique_ptr<FlyBehavior> flyBehavior;
    std::unique_ptr<QuackBehavior> quackBehavior;
};

#endif