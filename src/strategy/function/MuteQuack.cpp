#include "MuteQuack.h"
#include <iostream>

void MuteQuack::operator()() const { std::cout << "<< Silence >>\n"; }