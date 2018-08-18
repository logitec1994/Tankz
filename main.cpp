#include <iostream>
#include <conio.h>

const int W = 40;
const int H = 20;
bool is_game = true;
int plX, plY;
int enX, enY;
int bX, bY;

void setup()
{
    is_game = true;
    plX = W/2;
    plY = H/2;
    enX = rand() % W;
    enY = rand() % H;
}

void draw()
{
    system("cls");
    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            if (i == 0 || i == H-1)
            {
                std::cout << "#";
            } else if (j == 0 || j == W-1)
            {
                std::cout << "#";
            } else if (i == plY && j == plX)
            {
                std::cout << "F";
            } else if (i == bY && j == bX)
            {
                std::cout << "b";
            } else if (i == enY && j == enX)
            {
                std::cout << "T";
            } else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

void logic()
{
    char c = getche();
    if (plX == 0 || plX == W-1)
    {
        is_game = false;
    }
    if (plY == 0 || plY == H-1)
    {
        is_game = false;
    }
    if (c == 'w')
    {
        plY--;
    }
    if (c == 's')
    {
        plY++;
    }
    if (c == 'd')
    {
        plX++;
    }
    if (c == 'a')
    {
        plX--;
    }

}

int main(int argc, char const *argv[])
{

    setup();

    while(is_game)
    {
        draw();
        logic();
    }
    return 0;
}