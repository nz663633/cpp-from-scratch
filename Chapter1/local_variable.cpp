#include <iostream>

namespace work1
{
    int a = 1;
    void doSomething()
    {
        a += 3;
    }
}

namespace work2
{
    int a = 1;
    void doSomething()
    {
        a += 5;
    }
}

int main()
{
    using namespace std;

    int apple1 = 5;
    cout << "apple1: " << apple1 << endl;

    {
        int apple2 = 1; // 해당 변수는 해당 스코프 내에서만 적용
        cout << "apple2: " << apple2 << endl;
    }

    // cout << "apple2: " << apple2 << endl;
    cout << "apple1: " << apple1 << endl;

    // :: -> 영역(범위) 결정 연산자
    // work1::a -> work1 안에 있는 a
    work1::doSomething(); // work1 안의 doSomething() 호출
    cout << "work1: " << work1::a << endl;

    // work2::a -> work2 안에 있는 a
    work2::doSomething(); // work2 안의 doSomething() 호출
    cout << "work2: " << work2::a << endl;

    return 0;
}

// apple = 3;