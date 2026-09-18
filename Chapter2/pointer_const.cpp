#include <iostream>

using namespace std;

int main()
{
    const int value = 5;
    const int *ptr = &value; // 값 변경 불가능, 포인터 변경 가능
    // *ptr = 6;

    cout << *ptr << endl;

    int num = 10;
    const int *ptr2 = &num;
    num = 20;
    // *ptr2 = 20;

    cout << *ptr2 << endl;

    int value1 = 7;
    const int *ptr3 = &value1;

    int value2 = 6;
    ptr3 = &value2; // 다른 주소를 가리키도록 변경 가능
    // *ptr = 8;

    cout << *ptr3 << endl;

    int a = 1;
    int *const ptr4 = &a; // 값 변경 가능, 포인터 변경 불가능
    *ptr4 = 2;

    int b = 3;
    // ptr4 = &b;
    
    cout << *ptr4 << endl;

    int i = 100;
    const int *const ptr5 = &i; // 값, 포인터 둘 다 변경 불가능
    // *ptr = 200;

    return 0;
}