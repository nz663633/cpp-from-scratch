#include <iostream>
#include <typeinfo>
#include <iomanip>

int main()
{
    using namespace std;

    // 암시적 형변환

    int a = 123.0;

    // a의 데이터 타입 반환
    cout << "a 타입: " << typeid(a).name() << endl;
    cout << "a: " << a << endl;

    int b = 30000;
    char c = b;

    cout << static_cast<int>(c) << endl;

    cout << "=====" << endl;

    float f = 3.14;
    int i = f;

    cout << std::setprecision(12) << i << endl;

    cout << "=====" << endl;

    double d = 0.123456789;
    float m = d;

    // 실수의 유효숫자를 최대 12자리로 늘림
    cout << std::setprecision(12) << m << endl;

    cout << "=====" << endl;

    cout << 5 - 10 << endl;
    cout << 5u - 10 << endl;  // 언더플로우 발생
    cout << 5u - 10u << endl; // 언더플로우 발생

    cout << "=====" << endl;

    // 우선순위(더 크거나 정밀한 타입으로 암시적 형변환이 일어남)
    // int -> unsigned int -> long -> unsigned long ->
    // long long -> unsigned long long -> float -> double
    // long double

    // 명시적 형변환
    int num = static_cast<int>(4.0);
    cout << num << endl;

    return 0;
}