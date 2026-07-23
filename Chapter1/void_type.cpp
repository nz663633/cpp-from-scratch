#include <iostream>

void my_function() // 반환값이 없는 함수
{

}

int main()
{
    // void my_void
    int i = 123;
    float f = 123.456f;

    void *my_void; // 어떤 자료형의 주소든 저장 가능한 포인터

    my_void = (void*)&i; // i의 주소 저장
    my_void = (void*)&f; // f의 주소 저장

    return 0;
}