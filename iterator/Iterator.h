#ifndef ITERATOR_H
#define ITERATOR_H
#include <memory>
#include "MenuItem.h"

class Iterator {
public:
    virtual ~Iterator() = default;
    virtual bool HasNext() const = 0;
    virtual std::unique_ptr<MenuItem>& Next() = 0;
};

#endif