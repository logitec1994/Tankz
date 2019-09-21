#include <iostream>
#include "CGame.hpp"


CGame::CGame()
{
    isGame = true;
    std::cout << "Constructor Game" << std::endl;
}

CGame::~CGame()
{
    std::cout << "Destructor Game" << std::endl;
}

void CGame::setGame(bool state)
{
    isGame = state;
}

bool CGame::is_game()
{
    return isGame;
}