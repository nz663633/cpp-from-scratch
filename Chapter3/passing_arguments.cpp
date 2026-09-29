#include <iostream>

using namespace std;

void doSomething(int y)
{
    // 함수가 호출마다 새로운 y가 만들어지지만 같은 메모리 주소를 재사용할 수 있음
    cout << "In func " << y << " " << &y << endl;
}

int main()
{
    doSomething(5);

    int x = 6;

    cout << "In main " << x << " " << &x << endl;

    doSomething(x);
    doSomething(x + 1);

    return 0;
}