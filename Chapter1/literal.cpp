#include <iostream>

int main()
{
    using namespace std;

    // 10진수: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    // 8진수: 0, 1, 2, 3, 4, 5, 6, 7, 10, 11, 12, 13
    // 16진수: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F, 10, 11

    int x = 012; // 8진수 리터럴(앞에 0을 붙임)
    int y = 0xF; // 16진수 리터럴(앞에 0x를 붙임)
    int z = 0b1010; // 2진수 리터럴(앞에 0b를 붙임)

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    cout << "=====" << endl;

    const int price_per_item = 10; // 값을 변경할 수 없는 상수 변수

    int num_items = 123;
    int price = num_items * price_per_item;

    cout << price << endl;

    return 0;
}