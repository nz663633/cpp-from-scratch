#include <iostream>
#include <cmath>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    using namespace std;

    int x = 2; // x는 변수, 2는 정수 리터럴

    // x가 0보다 크면 1, 아니면 2
    int y = (x > 0) ? 1 : 2; // 삼항 연산자
    cout << y << endl;

    cout << "=====" << endl;

    int z = std::pow(2, 3); // 2의 3제곱
    cout << z << endl;

    cout << "=====" << endl;

    int a = 6, b = 6;

    cout << a << " " << b << endl;     // 6 6
    cout << ++a << " " << --b << endl; // 7 5
    cout << a++ << " " << b-- << endl; // 7 5
    cout << a << " " << b << endl;     // 8 4

    cout << "=====" << endl;

    int i = 1, j = 2;
    int k = add(i, ++j);

    cout << k << endl;

    cout << "=====" << endl;

    int num1 = 3;
    int num2 = 10;

    // 쉼표 연산자
    // int num3 = (++num1, ++num2);
    ++num1;
    ++num2;
    int num3 = num2;

    cout << num1 << " " << num2 << " " << num3 << endl;

    cout << "=====" << endl;

    // 조건부 연산자(3항 연산자)
    bool onSale = true;
    const int price = (onSale == true) ? 10 : 100;

    // if (onSale)
    //     price = 10;
    // else
    //     price = 100;

    cout << "가격: " << price << endl;

    return 0;
}