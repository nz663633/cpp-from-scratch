#include <iostream>

using namespace std;

// 함수 이름이 같아도 매개변수의 자료형이나 개수가 다르면
// 여러 개의 함수 정의 가능 -> 오버로딩

/*
    두 종류의 함수 add 중 어느 것을 사용할 지는
    컴파일 시점에 결정
*/
int add(int x, int y)
{
    return x + y;
}

double add(double x, double y)
{
    return x + y;
}

// 매개변수로 값을 돌려받는 방법
void getRandom(int &x) {}
void getRandom(double &x) {}

// 모호한 경우
// 전달한 인자를 두 함수 중 어느 쪽으로 변환해야 할지 명확 X
void print(unsigned int value) {}
void print(float value) {}

int main()
{
    add(1, 2);
    add(3.0, 4.0);

    int x;
    getRandom(x);

    // print('a');
    print((unsigned int)'a');

    // print(0);
    print(0u);

    // print(3.141592);
    print(3.141592f);

    return 0;
}