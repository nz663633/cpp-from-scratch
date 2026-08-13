#include <iostream>
#include <bitset>

int main()
{
    using namespace std;

    unsigned int a = 3;
    cout << std::bitset<8>(a) << endl;

    unsigned int b = a << 3;

    cout << std::bitset<8>(b) << endl;
    cout << "b: " << b << endl;

    cout << std::bitset<8>(~b) << endl;
    cout << "~b: " << ~b << endl;

    cout << "=====" << endl;

    // 앞에 0b를 붙이면 이진수로 표현
    unsigned int m = 0b1100;
    unsigned int n = 0b0110;
    cout << "m: " << m << ", n: " << n << endl;
    cout << std::bitset<4>(a & b) << endl; // bitwise AND
    cout << std::bitset<4>(a | b) << endl; // bitwise OR
    cout << std::bitset<4>(a ^ b) << endl; // bitwise XOR

    cout << "=====" << endl;

    cout << std::bitset<4>(5 & 12) << endl; // bitwise AND
    cout << std::bitset<4>(5 | 12) << endl; // bitwise OR
    cout << std::bitset<4>(5 ^ 12) << endl; // bitwise XOR

    return 0;
}