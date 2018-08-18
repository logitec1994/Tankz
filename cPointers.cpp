#include <iostream>
#include "cPointers.hpp"

void cPointers::show(int *var)
{
    std::cout << "Addr: " << var << " Value: " << *var <<  std::endl;
}

void cPointers::Foo(int *pa)
{
    (*pa)++;
}