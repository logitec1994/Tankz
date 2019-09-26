#ifndef SETUP_HPP
#define SETUP_HPP

// Default dimentions for buffer (field)
const int WIDTH = 16;
const int HEIGHT = 55;

//Default char for tank
const char FTANK = '@';
const char ETANK = '*';

//Start positions
const int X = (WIDTH - 4);
const int Y = (HEIGHT / 2);

struct Unit
{
    int x;
    int y;
    char c;
};

#endif