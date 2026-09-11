#include <iostream>
#include <typeinfo>

using namespace std;

struct Something
{
    int a, b, c, d;
};

int main()
{
    int x = 5;
    double d = 123.0;

    cout << x << endl;
    cout << &x << endl;

    cout << *(&x) << endl;

    cout << "=====" << endl;

    // 포인터: 메모리 주소를 저장하는 변수
    // 메모리 주소는 데이터 타입과 상관 X
    int *ptr_x = &x;
    double *ptr_d = &d;

    cout << ptr_x << endl;
    cout << *ptr_x << endl;
    cout << typeid(ptr_x).name() << endl; // Pointer int

    cout << ptr_d << endl;
    cout << *ptr_d << endl;
    cout << typeid(ptr_d).name() << endl; // Pointer double

    cout << "=====" << endl;

    // 데이터 타입과 관계없이 포인터 변수의 크기는 항상 고정
    cout << sizeof(x) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
    cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;

    cout << "=====" << endl;

    Something ss;
    Something *ptr_s;

    cout << sizeof(Something) << endl;
    cout << sizeof(ptr_s) << endl;

    return 0;
}