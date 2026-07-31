#include <iostream>

using namespace std;

// 상수들을 하나의 namespace에 모아서 관리
namespace constants
{
    constexpr double pi(3.141592);
    constexpr double avogadro(6.0221413e23);
    constexpr double moon_gravity(9.8 / 6.0);
}

void printNumber(const int my_number)
{
    // 파라미터를 함수 내에서 바꾸지 않는다
    // my_number = 10; // 오류

    cout << my_number << endl;
}

int main()
{
    printNumber(123);

    // constexpr과 const의 차이
    // constexpr: 컴파일 전에 값이 확정되어야 함
    // const: 실행 중에 값이 정해져도, 한 번 정해지면 변경 불가능
    constexpr double gravity{9.8};

    int number;
    cin >> number;

    // 사용자가 number를 입력할 때 special_number의 값이 결정
    // constexpr 사용 불가능
    const int special_number(number);

    const int price_per_item = 30;
    int num_item = 123;
    int price = num_item * price_per_item;

    cout << "=====" << endl;

    double radius;
    cin >> radius;

    // constants::pi -> constants 네임스페이스 안의 pi를 의미
    double circumference = 2.0 * radius * constants::pi;

    cout << circumference << endl;

    return 0;
}