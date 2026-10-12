#include <iostream>
#include <array>
#include <functional>

using namespace std;

// 함수의 매개변수 타입과 반환 타입이 일치해야
// 포인터 변수 하나로 서로 다른 함수를 가리키고 호출 가능
int func()
{
    return 5;
}

// int goo(int)
int goo()
{
    return 10;
}

bool isEven(const int &number)
{
    if (number % 2 == 0)
        return true;

    return false;
}

bool isOdd(const int &number)
{
    if (number % 2 != 0)
        return true;

    return false;
}

// typedef bool (*check_fcn_t)(const int &);
using check_fcn_t = bool (*)(const int &);

void printNumbers(const array<int, 10> &my_array,
    function<bool(const int &)> check_fcn)
{
    for (auto element : my_array)
    {
        if (check_fcn(element) == true)
            cout << element << " ";
        // if (!print_even && element % 2 == 1)
        //     cout << element << " ";
    }
    cout << endl;
}

int main()
{
    // 함수도 포인터다! 함수도 주소를 가지고 있다.
    // func 함수의 주소 출력
    cout << func << endl;

    int (*fcnptr)() = func;

    cout << fcnptr() << endl; // 5

    // fcnptr이 가리키는 함수를 goo로 변경
    fcnptr = goo;

    cout << fcnptr() << endl; // 10

    cout << "=====" << endl;

    array<int, 10> my_array = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    function<bool(const int &)> fcnptr2 = isEven;

    printNumbers(my_array, fcnptr2);

    // 홀수 판별 함수로 변경
    fcnptr2 = isOdd;

    printNumbers(my_array, fcnptr2);

    // printNumbers(my_array, isOdd);

    return 0;
}