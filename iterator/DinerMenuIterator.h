#ifndef DINERMENUITERATOR_H
#define DINERMENUITERATOR_H
#include <array>
#include "Iterator.h"

static const int MAX_ITEMS = 6;

class DinerMenuIterator : public Iterator {
public:
    explicit DinerMenuIterator(std::array<std::unique_ptr<MenuItem>, MAX_ITEMS>& ims): items(ims) {}

    std::unique_ptr<MenuItem>& Next() override
    {
        return items[position++];
    }

    bool HasNext() const override
    {
        return items.size() > position;
    }

private:
    std::array<std::unique_ptr<MenuItem>, MAX_ITEMS>& items;
    int position = 0;
};

#endif
