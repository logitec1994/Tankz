#ifndef IUNIT_HPP
#define IUNIT_HPP

class IUnit
{
public:
    IUnit();
    ~IUnit();
    int get_x();
    int get_y();
    char get_char();
    void set_char(char c);
    struct unit
    {
        int x;
        int y;
        char c;
    };
    unit u;

};

#endif