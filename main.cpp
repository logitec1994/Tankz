#include <iostream>

#include "CApp.hpp"
#include "IUnit.hpp"


class Point
{
public:
    struct coords
    {
        int x;
        int y;
    };

    coords crd;

};


int main()
{

    IUnit tank;
    std::cout << tank.get_x() << std::endl;
    std::cout << tank.get_y() << std::endl;
    std::cout << tank.get_char() << std::endl;
    tank.set_char('F');
    std::cout << tank.get_char() << std::endl;

    CApp app;
    app.run();

    return 0;
}
