#include <iostream>

using namespace std;

class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    // 생성자 (외부에서 호출 용도 X)
    Fraction()
    {
        m_numerator = 1;
        m_denominator = 1;
    }

    Fraction(const int &num_input, const int &den_input)
    {
        m_numerator = num_input;
        m_denominator = den_input;

        cout << "Fraction() constructor" << endl;
    }

public:
    void print()
    {
        cout << m_numerator << " / " << m_denominator << endl;
    }
};

class Second
{
public:
    Second()
    {
        cout << "class Second constructor()" << endl;
    }
};

class First
{
    Second sec;

public:
    First()
    {
        cout << "class First constructor()" << endl;
    }
};

int main()
{
    // 파라미터가 하나도 없는 생성자를 사용할 때 () 제외해야한다.
    Fraction frac;
    frac.print();

    Fraction frac2(3, 2);
    frac2.print();

    First fir;

    return 0;
}