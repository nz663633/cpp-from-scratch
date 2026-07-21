#include <iostream>

// 함수명이 같고 역할이 다른 두 함수

namespace MySpace1
{
    namespace InnerSpace // 중첩 namespace
    {
        int my_function()
        {
            return 0;
        }
    }
    int doSomething(int a, int b)
    {
        return a + b;
    }
}

namespace MySpace2
{
    int doSomething(int a, int b)
    {
        return a * b;
    }
}

using namespace std;

int main()
{
    cout << MySpace1::doSomething(3, 4) << endl;
    cout << MySpace2::doSomething(3, 4) << endl;
    cout << MySpace1::InnerSpace::my_function() << endl;

    using namespace MySpace1; // 이후 MySpace1:: 생략 가능
    cout << doSomething(1, 2) << endl;

    return 0;
}