#ifndef CBUFFER_HPP
#define CBUFFER_HPP

const int n = 16;
const int m = 55;

class CBuffer
{
public:
    CBuffer();
    ~CBuffer();
    void draw();
    void clear();
    void add(char c, int x, int y);
    void fill();
    // void remove(); // can be not used
private:
    char buffer[n][m];
};

#endif //CBUFFER_HPP