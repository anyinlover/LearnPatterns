#ifndef FLYBEHAVIOR_H
#define FLYBEHAVIOR_H

class FlyBehavior {
public:
    virtual ~FlyBehavior() = default;
    virtual void Fly() = 0;
};

#endif