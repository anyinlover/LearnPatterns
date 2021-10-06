#ifndef SUBJECT_H
#define SUBJECT_H
#include "Observer.h"

class Subject {
public:
    virtual ~Subject() = default;
    virtual void RegisterObserver(Observer* observer) = 0;
    virtual void RemoveObserver(Observer* observer) = 0;
    virtual void NotifyObservers() = 0;
};

#endif