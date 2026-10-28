#include <iostream>

using namespace std;

class Simple
{
private:
    int m_id;

public:
    Simple(int id)
    {
        // this: 현재 멤버 함수를 호출한 객체의 주소를 가리키는 포인터
        // this->setID(id);
        // this->m_id;

        setID(id);

        cout << this << endl;
    }

    void setID(int id)
    {
        m_id = id;
    }

    int getID()
    {
        return m_id;
    }
};

class Calc
{
private:
    int m_value;

public:
    Calc(int init_value)
        : m_value(init_value)
    {
    }

    // Calc 객체 자체를 참조로 반환
    Calc &add(int value)
    {
        m_value += value;
        return *this; // 현재 객체 자체를 참조로 반환
    }

    Calc &sub(int value)
    {
        m_value -= value;
        return *this;
    }

    Calc &mult(int value)
    {
        m_value *= value;
        return *this;
    }

    void print()
    {
        cout << m_value << endl;
    }
};

int main()
{
    Simple s1(1), s2(2);
    s1.setID(2);
    s2.setID(4);

    cout << &s1 << " " << &s2 << endl;

    Calc cal(10);
    // cal.add(10);
    // cal.sub(1);
    // cal.mult(2);
    cal.add(10).sub(1).mult(2); // 체이닝

    cal.print();

    return 0;
}