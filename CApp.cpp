#include <iostream>
#include "CApp.hpp"
#include "CGame.hpp"
#include "CBuffer.hpp"

CGame game;
CBuffer buffer;

CApp::CApp()
{
    std::cout << "App Constructor" << std::endl;
}

CApp::~CApp()
{
    std::cout << "App Destructor" << std::endl;
}

void CApp::run()
{
    std::cout << "App is runned" << std::endl;
    // bullshit
    buffer.add(2, 11);
    buffer.add();
    buffer.draw();
}

void CApp::end()
{
    std::cout << "App is ended" << std::endl;
}