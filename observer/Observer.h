#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
public:
    virtual ~Observer() = default;
    virtual void Update(float temp, float humi, float pres) = 0;
};

#endif