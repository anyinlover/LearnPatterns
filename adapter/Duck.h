#ifndef DUCK_H
#define DUCK_H

class Duck {
public:
    virtual ~Duck() = default;
    virtual void Quack() = 0;
    virtual void Fly() = 0;
};

#endif