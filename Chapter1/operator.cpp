#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x = 2; // x는 변수, 2는 정수 리터럴

    // x가 0보다 크면 1, 아니면 2
    int y = (x > 0) ? 1 : 2; // 삼항 연산자
    cout << y << endl;

    cout << "=====" << endl;

    int z = std::pow(2, 3); // 2의 3제곱
    cout << z << endl;

    return 0;
}