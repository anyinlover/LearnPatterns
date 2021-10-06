#ifndef CHOCOLATEBOILER_H
#define CHOCOLATEBOILER_H

#include <memory>

class ChocolateBoiler {
public:
    static ChocolateBoiler& GetInstance();
    void Fill();
    void Drain();
    void Boil();
    bool IsEmpty() const;
    bool IsBoiled() const;

protected:
    ChocolateBoiler() = default;

private:
    ~ChocolateBoiler() = default;
    ChocolateBoiler(ChocolateBoiler const&) = delete;
    ChocolateBoiler(ChocolateBoiler&&) = delete;
    ChocolateBoiler operator=(ChocolateBoiler const&) = delete;
    ChocolateBoiler operator=(ChocolateBoiler &&) = delete;
    bool empty = true;
    bool boiled = false;
};

#endif