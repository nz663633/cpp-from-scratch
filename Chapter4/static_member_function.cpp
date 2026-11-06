#include <iostream>

using namespace std;

class Something
{
public:
    // inner class
    class _init
    {
    public:
        _init()
        {
            // static 멤버 변수 값 초기화 가능
            // static 멤버 변수이기 때문에 객체 없이 접근 가능
            s_value = 500;
        }
    };

private:
    static int s_value;
    int m_value = 3;

    // _init 타입
    static _init s_initializer;

public:
    Something()
        : m_value(123)
    {
    }

public:
    static int getValue()
    {
        // 정적 멤버 함수는 특정 객체에 소속되어 실행 X
        // return this->s_value;

        // st의 m_value? 아니면 s2의 m_value? -> 객체 명시 X
        // return m_value;

        // return this->m_value;

        return s_value;
    }

    int temp()
    {
        return this->s_value + this->m_value;
    }
};

int Something::s_value = 100;
Something::_init Something::s_initializer;

int main()
{
    cout << Something::getValue() << endl;

    Something s1, s2;
    cout << s1.getValue() << endl;
    // cout << s1.s_value << endl;

    // fptr1은 temp()를 가리킴
    int (Something::*fptr1)() = &Something::temp;

    cout << (s2.*fptr1)() << endl;

    // fptr2는 getValue()를 가리킴
    // getValue는 static 멤버 함수이므로 일반 함수 포인터로 가리킴
    int (*fptr2)() = &Something::getValue;

    cout << fptr2() << endl;

    return 0;
}