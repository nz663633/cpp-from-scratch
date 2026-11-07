#include <iostream>

using namespace std;

// 전방 선언 forward declaration
// 실제 정의가 나오기 전, 컴파일러에게 B라는 클래스의 존재 알림
class A;

class B
{
private:
    int m_value = 2;

public:
    void doSomething(A &a); // 프로토타입
};

class A
{
private:
    int m_value = 1;

    // friend class B; // B 클래스의 모든 멤버 함수에 접근 가능
    friend void B::doSomething(A &a); // B 클래스의 doSomething()에만 접근 가능
};

void B::doSomething(A &a)
{
    // A 클래스에서 해당 함수를 friend로 지정했기 때문에 a.m_value에 접근 가능
    cout << a.m_value << endl;
}

int main()
{
    A a;
    B b;
    b.doSomething(a);

    return 0;
}