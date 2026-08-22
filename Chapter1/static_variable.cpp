#include <iostream>

using namespace std;

int value = 123;
int a = 1; // 전역 변수

void doSomething()
{
    // b는 static 지역 변수(static 때문에 함수가 끝나도 값이 유지)
    // static 지역 변수는 처음 한 번만 초기화됨
    static int b = 5;

    // 일반 지역 변수(doSomething()이 호출될 때마다 새롭게 생성됨)
    int c = 10;
    ++a;
    ++b;
    ++c;

    cout << "a: " << a << ", " << "b: " << b << ", " << "c: " << c << endl;
}

int main()
{
    cout << value << endl; // 123

    int value = 1;

    cout << ::value << endl; // 범위 지정 연산자(::) 사용해서 value 출력가능
    cout << value << endl;   // 1

    cout << "=====" << endl;

    doSomething();
    doSomething();
    doSomething();

    return 0;
}