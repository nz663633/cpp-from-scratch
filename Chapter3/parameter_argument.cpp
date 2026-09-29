#include <iostream>

using namespace std;

int foo(int x, int y);

// 파라미터(매개변수): 함수가 호출될 때 전달받은 값을 저장하는 변수
int foo(int x, int y)
{
    return x + y;
} // 파라미터 x와 y는 함수 종료와 동시에 사라짐

int main()
{
    int x = 1, y = 2;

    foo(6, 7); // 6, 7 : arguments(인자, 실인자)
    foo(x, y + 1);

    return 0;
}