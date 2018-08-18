#include <iostream>
#include "main.hpp"

int main(int argc, char const *argv[])
{

    cPointers ptr;
    ptr.show(ptr.pa);

    int a = ptr.a;

    std::cout << "A before Foo() " << a << std::endl;
    ptr.Foo(ptr.pa);
    std::cout << "A after Foo() " << a << std::endl;
    std::cout << "A from ptr.a: " << ptr.a << std::endl;
    a = ptr.a;
    std::cout << "A after Foo() to ptr.pa " << a << std::endl;


    return 0;
}