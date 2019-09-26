#include "IUnit.hpp"

int IUnit::get_x()
{
    return u.x;
}

int IUnit::get_y()
{
    return u.y;
}

char IUnit::get_char()
{
    return u.c;
}

void IUnit::set_char(char c)
{
    u.c = c;
}

IUnit::IUnit()
{
    u.x = 4;
    u.y = 5;
    u.c = 'L';
}

IUnit::~IUnit()
{
}