#include <iostream>

using namespace std;

class Something
{
public:
    // static 멤버 변수는 이니셜라이즈 X
    // static int m_value = 1;

    // const를 붙이면 반드시 이니셜라이즈해야함
    // static const int m_value = 1;

    static int m_value;
};

int Something::m_value = 1; // define in cpp

int generateID()
{
    static int s_id = 0;
    return ++s_id;
}

int main()
{
    cout << generateID() << endl;
    cout << generateID() << endl;
    cout << generateID() << endl;

    // 두 객체 st1, st2가 하나의 변수를 공유함
    Something st1;
    Something st2;

    st1.m_value = 2;

    // 같은 주소, 같은 값 출력
    cout << st1.m_value << " " << &st1.m_value << endl;
    cout << st2.m_value << " " << &st2.m_value << endl;

    Something::m_value = 1024;
    cout << &Something::m_value << " " << Something::m_value << endl;

    return 0;
}