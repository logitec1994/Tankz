#include <iostream>
#include "CBuffer.hpp"


// Drawing a buffer
void CBuffer::draw()
{
    for (int i = 0; i < n; i++)
    {
        std::cout << std::endl;
        for (int j = 0; j < m; j++)
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || i == n-1)
                buffer[i][j] = '+';
            else if (j == 0 || j == m-1)
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
void CBuffer::add(char c, int x, int y)
{
    buffer[x][y] = c;
}

// Default size 16x55 watch in CBuffer.hpp
CBuffer::CBuffer()
{
    fill();
}

CBuffer::~CBuffer()
{
}