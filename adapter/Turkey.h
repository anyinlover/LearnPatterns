#ifndef TURKEY_H
#define TURKEY_H

class Turkey {
public:
    virtual ~Turkey() = default;
    virtual void Gobble() = 0;
    virtual void Fly() = 0;
};

#endif