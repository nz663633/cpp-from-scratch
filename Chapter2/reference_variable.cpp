#include <iostream>

using namespace std;

// 함수 파라미터로 참조 변수를 사용하면
// 호출한 변수 n 자체를 참조하게 됨
// 만약, 포인터 변수를 파라미터로 넘기면 주소 값이 복사되어 전달됨
// 만약, const int &n을 사용하면 함수 내에서 n을 통해 값을 변경할 수 없음
void doSomething(int &n)
{
    n = 100;
    cout << "In doSomething " << n << endl;
    cout << &n << endl;
}

// 배열 전체를 참조로 전달
void printElements(int (&arr)[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

struct Something
{
    int v1;
    float v2;
};

struct Other
{
    Something st;
};

int main()
{
    int value = 5;

    int *ptr = nullptr;
    ptr = &value;

    // 참조 변수
    // ref는 value를 다른 이름으로 부르는 것
    int &ref = value;

    cout << ref << endl;

    ref = 10; // *ptr = 10;

    cout << value << " " << ref << endl;

    cout << &value << endl;
    cout << &ref << endl;
    cout << ptr << endl;  // 포인터 변수 ptr이 가리키는 주소 출력
    cout << &ptr << endl; // 포인터 변수 ptr 자체의 주소 출력

    const int x = 10;
    const int &ref2 = x;
    // int &ref2 = x; -> const 변수 x의 값을 변경할 수 있게 되므로 허용 X
    cout << "=====" << endl;

    int value1 = 10;
    int value2 = 20;

    int &ref3 = value1;

    cout << ref3 << endl;

    ref3 = value2; // value1에 value2를 대입

    cout << ref3 << endl;

    cout << "=====" << endl;

    int n = 2;

    cout << n << endl;
    cout << &n << endl;

    // 위에서 선언한 n과 doSomething의 파라미터 n은 다름
    doSomething(n);

    cout << n << endl;

    cout << "=====" << endl;

    const int length = 5;
    int arr[length] = {1, 2, 3, 4, 5};

    printElements(arr);

    cout << "=====" << endl;

    Other ot;

    // ot.st.v1 = 50;
    int &v1 = ot.st.v1;
    v1 = 50;

    int v2 = 3;
    int *const ptr2 = &v2;
    int &ref4 = v2;

    *ptr2 = 10;

    cout << ptr2 << endl;
    cout << &ref4 << endl;

    return 0;
}