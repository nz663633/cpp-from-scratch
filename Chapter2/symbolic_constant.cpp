// C-ctyle

#include <iostream>

using namespace std;

const char *getName()
{
    return "Jack jack";
}

int main()
{
    // char name[] = "Jack jack";
    // const로 문자열 리터럴을 수정하지 않겠다고 명시
    const char *name = getName();
    const char *name2 = "Jack jack";

    // 동일한 문자열 리터럴을 같은 메모리에 저장할 수 있음 -> 같은 주소 출력
    cout << (uintptr_t)name << endl;
    cout << (uintptr_t)name2 << endl;

    cout << endl;

    int int_arr[5] = {1, 2, 3, 4, 5};
    char char_arr[] = "Hello, World!";

    cout << int_arr << endl;

    // cout은 char*를 C 스타일 문자열로 처리
    cout << char_arr << endl; // null을 만나기 전까지의 문자열 출력
    cout << name << endl;

    cout << endl;

    char c = 'Q';
    cout << &c << endl;

    return 0;
}