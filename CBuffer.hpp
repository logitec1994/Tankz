#ifndef CBUFFER_HPP
#define CBUFFER_HPP

#include "Setup.hpp"

class CBuffer
{
public:
    CBuffer();
    ~CBuffer();
    void draw();
    void clear();
    void add(int x, int y);
    void add();
    void fill();
    // void remove(); // can be not used
private:
    char buffer[WIDTH][HEIGHT];
};

#endif //CBUFFER_HPP