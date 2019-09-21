#ifndef CGAME_HPP
#define CGAME_HPP

class CGame
{
public:
    CGame();
    ~CGame();
    void setGame(bool state);
    bool is_game();
private:
    bool isGame;

};

#endif // CGAME_HPP