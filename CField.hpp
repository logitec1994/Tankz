#ifndef CFIELD_HPP
#define CFIELD_HPP

const int n = 5;
const int m = 5;

class CField
{
public:
    CField();
    ~CField();
    void draw();
private:
    char field[n][m];
};

#endif //CFIELD_HPP