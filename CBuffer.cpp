#include <iostream>
#include "CBuffer.hpp"
#include "Setup.hpp"


// Drawing a buffer
void CBuffer::draw()
{
    for (int i = 0; i < WIDTH; i++)
    {
        std::cout << std::endl;
        for (int j = 0; j < HEIGHT; j++)
        {
            std::cout << buffer[i][j];
        }
    }
    std::cout << std::endl;
}


/*  
*   Fill buffer with default values
*   Filled when creating an object
*/
void CBuffer::fill()
{
    for (int i = 0; i < WIDTH; i++)
    {
        for (int j = 0; j < HEIGHT; j++)
        {
            if (i == 0 || i == WIDTH-1)
                buffer[i][j] = '+';
            else if (j == 0 || j == HEIGHT-1)
                buffer[i][j] = '|';
            else
                buffer[i][j] = ' ';

        }
    }
}

// Add a new symbol to buffer

/*
*
*/
void CBuffer::add(int x, int y)
{
    buffer[x][y] = FTANK;
}

void CBuffer::add()
{
    buffer[X][Y] = FTANK;
}

// Default size 16x55 watch in CBuffer.hpp
CBuffer::CBuffer()
{
    fill();
}

CBuffer::~CBuffer()
{
}