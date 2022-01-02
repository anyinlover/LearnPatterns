#ifndef QUACKBEHAVIOR_H
#define QUACKBEHAVIOR_H

class QuackBehavior {
public:
    virtual ~QuackBehavior() = default;
    virtual void Quack() = 0;
};

#endif