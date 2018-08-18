#ifndef TANKZ_CPOINTES_HPP
#define TANKZ_CPOINTES_HPP

class cPointers
{

public:
    int a = 5;
    int *pa = &a;
    // cPointers();
    // ~cPointers();

    void show(int *var);

    void Foo(int *pa);
    
};

#endif