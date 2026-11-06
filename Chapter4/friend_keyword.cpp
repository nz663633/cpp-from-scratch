#include <iostream>

using namespace std;

// 전방 선언 forward declaration
// 실제 정의가 나오기 전, 컴파일러에게 B라는 클래스의 존재 알림
class B;

class A
{
private:
    int m_value = 1;

    friend void doSomething(A &a, B &b);
};

class B
{
private:
    int m_value = 2;

    friend void doSomething(A &a, B &b);
};

void doSomething(A &a, B &b)
{
    cout << a.m_value << " " << b.m_value << endl;
}

int main()
{
    A a;
    B b;
    doSomething(a, b);

    return 0;
}