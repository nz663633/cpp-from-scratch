#include <iostream>

using namespace std;

// 해당 변수는 다른 cpp파일에서 접근 불가능
static int g_a = 1;

// extern: 다른 cpp 파일에 정의된 함수를 사용하기 위해 선언
extern void doSomething();
int a = 456;

/*
    int g_x; // 전역 변수(초기화하지 않으면 기본적으로 0으로 초기화)
    static int g_x; // 현재 cpp 파일에서만 사용 가능
    const int g_x; // const 변수는 선언과 동시에 초기화해야 함

    // 다른 곳에 정의되어 있는 g_z라는 변수를 선언하는 것
    extern int g_z;

    // 다른 파일에 extern const로 정의된 g_z를 사용하기 위해 선언
    // 다른 파일에 extern const int g_z = 1; 과 같이 정의되어 있다고 가정
    extern const int g_z;

    int g_y(1);
    static int g_y(1);
    const int g_y(1);

    extern int g_w(1);
    extern const int g_w(1);
*/

int main()
{
    doSomething();
    cout << a << endl;

    return 0;
}