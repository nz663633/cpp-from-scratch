#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main()
{
    using namespace std;

    float f(3.14);
    double d;
    long double ld;

    cout << sizeof(f) << endl; // 4바이트
    cout << sizeof(d) << endl; // 8바이트
    cout << sizeof(ld) << endl; // 16바이트

    // 표현 가능한 가장 큰 양수
    cout << numeric_limits<float>::max() << endl;
    cout << numeric_limits<double>::max() << endl;
    cout << numeric_limits<long double>::max() << endl;

    // lowest(): 표현 가능한 가장 큰 음수(가장 작은 값)
    // min(): 0에 가장 가까운 양수
    cout << numeric_limits<float>::lowest() << endl;
    cout << numeric_limits<float>::lowest() << endl;
    cout << numeric_limits<float>::lowest() << endl;

    cout << 3.14 << endl;
    cout << 31.4e-1 << endl; // 3.14
    cout << 31.4e-2 << endl; // 0.314
    cout << 31.4e1 << endl; // 314
    cout << 31.4e2 << endl; // 3140

    // cout은 기본적으로 약 6자리까지만 출력
    // setprecision()은 출력 형식만 바꿈, 실제 저장된 값 변하지 않는다.
    cout << std::setprecision(16) << endl; // 16자리까지 출력
    cout << 1.0 / 3.0 << endl;

    double d1(1.0);
    double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

    cout << setprecision(17);
    cout << d1 << endl;
    // 컴퓨터는 0.1와 같은 값을 2진수로 정확하게 저장할 수 없다.
    // 0.1은 2진수로 정확하게 표현되지 않기 때문에 오차 발생
    cout << d2 << endl; 

    double zero = 0.0;
    double posinf = 5.0 / zero;
    double neginf = -5.0 / zero;
    double nan = zero / zero;

    cout << posinf << " " << std::isnan(posinf) << endl; // inf는 NaN이 아니다.
    cout << neginf << " " << std::isnan(neginf) << endl; // -inf는 NaN이 아니다.
    cout << nan << " " << std::isnan(nan) << endl;
    cout << 1.0 << " " << std::isnan(1.0) << endl;

    return 0;
}