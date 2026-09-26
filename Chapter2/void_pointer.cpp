#include <iostream>

using namespace std;

// void pointer, generic pointer
// 포괄적인 포인터(모든 자료형을 다룰 수 있는)

// void* 자체는 자료형을 기억 X
// 별도로 자료형 정보를 관리
enum Type
{
    INT,
    FLOAT,
    CHAR
};

int main()
{
    int i = 5;
    float f = 3.0;
    char c = 'a';

    // int인지 float인지 char인지 알 수 없음
    void *ptr = nullptr;

    ptr = &i;
    ptr = &f;
    ptr = &c;

    // void 포인터는 몇 바이트를 계산해야하는지 모름
    // cout << ptr + 1 << endl;

    cout << &f << " " << ptr << endl;

    // 역참조 불가능
    // cout << *ptr << endl;

    Type type = FLOAT;

    if (type == FLOAT)
    {
        // 캐스팅으로 역참조 가능
        // ptr의 타입 void* -> float*로 변경
        cout << *static_cast<float *>(ptr) << endl;
    }
    else if (type == INT)
    {
        // ptr의 타입 void* -> int*로 변경
        cout << *static_cast<int *>(ptr) << endl;
    }

    return 0;
}