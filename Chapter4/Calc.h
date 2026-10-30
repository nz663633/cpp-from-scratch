#include <iostream>

class Calc
{
private:
    int m_value;

public:
    // 클래스의 선언만 남겨놓음
    Calc(int init_value);

    Calc &add(int value);
    Calc &sub(int value);
    Calc &mult(int value);

    void print();
}; 