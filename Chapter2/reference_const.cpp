#include <iostream>

using namespace std;

// void doSomething(int x)
// -> 값을 복사해서 받아 함수 안에서 값 변경 가능, 하지만 원본 수정 X
// void doSomething(const int &x)
// -> 원본 값을 복사하지 않고 참조, 함수 내에서 값 수정 X
// -> 문자열처럼 큰 객체를 복사하지 않고 읽기만 하고 싶을 때 주로 사용
void doSomething(const int x) // 값을 복사하지만 함수 내에서 수정 불가능
{
    cout << x << endl;
}

int main()
{
    const int x = 5;

    // const가 붙지 않은 참조 변수는 리터럴 대입 불가능
    // int &ref_x = 3 + 4;
    const int &ref_x = 3 + 4;

    cout << ref_x << endl;
    cout << &ref_x << endl;

    // 값으로 전달하는 함수 파라미터는 숫자 같은 값을 직접 전달할 수 있음
    // const가 붙으면 함수 내부에서 파라미터 값을 수정할 수 없음
    doSomething(10);
    doSomething(ref_x + 10);

    const int &ref_2 = ref_x;
    cout << &ref_2 << endl;

    return 0;
}