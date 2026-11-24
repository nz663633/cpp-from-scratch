// 증감 연산자 오버로딩

#include <iostream>

using namespace std;

class Digit
{
private:
    int m_digit;

public:
    Digit(int digit = 0) : m_digit(digit) {}

    // prefix
    // 값을 미리 증가 시키고, 증가된 값을 return
    Digit &operator++()
    {
        ++m_digit;

        return *this; // 자기자신을 return
    }

    // postfix
    // 기존 값을 미리 복사해 두고, 값을 증가시킨 다음에 그 값을 return
    // prefix와 postfix의 이름이 operator++으로 같기 때문에
    // 구별하기 위해서 int를 매개변수로 설정
    Digit operator++(int)
    {
        Digit temp(m_digit); // 현재 값을 temp에 복사해 둠
        ++(*this);           // prefix 재사용 (자신의 현재 값 증가시킴)

        return temp; // 미리 복사해 둔 값을 return
    }

    friend ostream &operator<<(ostream &out, const Digit &d)
    {
        out << d.m_digit;
        return out;
    }
};

int main()
{
    int a = 10;

    cout << ++a << endl;
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;

    cout << "=====" << endl;

    Digit d(5);

    cout << ++d << endl;
    cout << d << endl;

    cout << d++ << endl;
    cout << d << endl;

    return 0;
}