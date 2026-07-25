#include <iostream>

int main()
{
    using namespace std;

    bool b1 = true;
    bool b2(false);
    bool b3{ true };
    b3 = false;

    cout << std::boolalpha; // bool 값을 true, false 형태로 출력
    cout << b3 << endl;
    cout << b1 << endl;
    cout << !b2 << endl; // 논리 NOT 연산자

    cout << "=====" << endl;
    cout << (true && true) << endl;
    cout << (true && false) << endl;
    cout << (false && true) << endl;
    cout << (false && false) << endl;

    cout << "=====" << endl;
    cout << std::noboolalpha; // bool 값을 0, 1 형태로 출력
    cout << (true || true) << endl;
    cout << (true || false) << endl;
    cout << (false || true) << endl;
    cout << (false || false) << endl;

    return 0;
}