#include <iostream>
#include <cassert>
#include <array>

using namespace std;

void printValue(const array<int, 5> &my_array, const int &idx)
{
    assert(idx >= 0);
    assert(idx <= my_array.size() - 1);

    cout << my_array[idx] << endl;
}

int main()
{
    int number = 5;
    assert(number == 5); // true

    array<int, 5> my_array{1, 2, 3, 4, 5};
    printValue(my_array, 3);

    const int x = 10;

    // 프로그램을 실행(런타임)하는 도중에 조건 검사
    assert(x == 10);

    // 프로그램을 컴파일하는 도중에 조건 검사
    // static_assert의 조건은 검사 도중에 값을 확정할 수 있어야 함
    static_assert(x == 10, "x should be 10");

    return 0;
}