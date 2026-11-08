#include <iostream>

using namespace std;

class Cents
{
private:
    int m_cents;

public:
    Cents(int cents)
    {
        m_cents = cents;
    }

    int getCents() const
    {
        return m_cents;
    }
};

class A
{
public:
    int m_value;

    A(const int &input)
        : m_value(input)
    {
        cout << "Constructor" << endl;
    }

    ~A()
    {
        cout << "Destructor" << endl;
    }

    void print()
    {
        cout << m_value << endl;
    }
};

Cents add(const Cents &c1, const Cents &c2)
{
    return Cents(c1.getCents() + c2.getCents());
}

int main()
{
    A a(1);
    a.print();

    // 익명 객체 생성
    // 문장이 끝나는 순간 소멸자 호출
    A(1).print();

    // A().print();

    cout << add(Cents(6), Cents(8)).getCents() << endl;
    cout << int(6) + int(8) << endl;

    return 0;
}