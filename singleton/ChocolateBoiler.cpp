#include "ChocolateBoiler.h"

ChocolateBoiler& ChocolateBoiler::GetInstance()
{
    static ChocolateBoiler instance;
    return instance;
}

void ChocolateBoiler::Fill()
{
    if (IsEmpty()) {
        empty = false;
        boiled = false;
    }
}

void ChocolateBoiler::Drain()
{
    if (!IsEmpty() && IsBoiled()) {
        empty = true;
    }
}

void ChocolateBoiler::Boil()
{
    if (!IsEmpty() && !IsBoiled()) {
        boiled = true;
    }
}

bool ChocolateBoiler::IsEmpty() const
{
    return empty;
}

bool ChocolateBoiler::IsBoiled() const
{
    return boiled;
}