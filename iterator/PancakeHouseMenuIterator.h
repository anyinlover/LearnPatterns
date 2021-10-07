#ifndef PANCAKEHOUSEMENUITERATOR_H
#define PANCAKEHOUSEMENUITERATOR_H
#include <vector>
#include "Iterator.h"

class PancakeHouseMenuIterator : public Iterator {
public:
    explicit PancakeHouseMenuIterator(std::vector<std::unique_ptr<MenuItem>>& ims) : items(ims), iter(items.begin()) {}
    std::unique_ptr<MenuItem>& Next() override
    {
        return *iter++;
    }

    bool HasNext() const override
    {
        return iter != items.end();
    }

private:
    std::vector<std::unique_ptr<MenuItem>>& items;
    std::vector<std::unique_ptr<MenuItem>>::iterator iter;
};

#endif