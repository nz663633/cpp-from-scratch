// 실제 구현

#include "Calc.h"

Calc::Calc(int init_value)
    : m_value(init_value)
{
}

Calc &Calc::add(int value)
{
    m_value += value;
    return *this; // 현재 객체 자체를 참조로 반환
}

Calc &Calc::sub(int value)
{
    m_value -= value;
    return *this;
}

Calc &Calc::mult(int value)
{
    m_value *= value;
    return *this;
}

void Calc::print()
{
    // 헤더파일에서는 최대한 namespace를 쓰지 않도록 한다
    using namespace std;

    cout << m_value << endl;
}