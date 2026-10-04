#include <iostream>

using namespace std;

/*
함수에 변수 자체가 아닌 변수의 주소를 전달하여
원본 변수에 접근하는 방법
*/
void foo(const int *ptr)
{
    // 포인터 변수도 변수다!
    // &ptr의 출력 값은 foo 내부의 포인터 변수 ptr 자체의 주소
    cout << *ptr << " " << ptr << " " << &ptr << endl;

    // const로 인해 수정 불가능
    // *ptr = 10;
}

void foo2(double degrees, double *sin_out, double *cos_out)
{
    // 인자로 주소를 전달하기 때문에
    // 변수 sin, cos 자체를 수정
    *sin_out = 1.0;
    *cos_out = 2.0;
}

int main()
{
    int value = 5;

    cout << value << " " << &value << endl;

    int *ptr = &value;

    cout << &ptr << endl; // 포인터 변수 ptr 자체의 주소

    foo(ptr);
    foo(&value);
    // foo(5);

    cout << "=====" << endl;

    double degrees = 30;
    double sin, cos;

    // 함수 foo2에서 바꿔준 값이 함수 밖에서도 영향을 준다
    foo2(degrees, &sin, &cos);

    cout << sin << " " << cos << endl;

    return 0;
}