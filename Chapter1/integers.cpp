#include <iostream>
#include <cmath>
#include <limits>

int main()
{
    using namespace std;

    short s = 1;
    int i = 1;
    long l = 1;
    long long ll = 1;

    cout << sizeof(short) << endl; // 2바이트(16비트)

    // short의 최대값(2^(16-1)-1) 계산
    cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;

    cout << std::numeric_limits<short>::max() << endl; // short 최대값
    cout << std::numeric_limits<short>::min() << endl; // short 최소값
    cout << std::numeric_limits<short>::lowest() << endl; // short가 표현할 수 있는 가장 작은 값(min()과 동일)

    s = 32767;
    s = s + 1; // s는 32768이 저장될까?
    cout << s << endl; // 오버플로우 발생

    s = std::numeric_limits<short>::min();
    cout << "min(): " << s << endl;
    s = s - 1; // s는 -32769이 저장될까?
    cout << s << endl; // 언더플로우 발생

    cout << sizeof(int) << endl; // 4바이트
    cout << sizeof(long) << endl; // 4바이트
    cout << sizeof(long long) << endl; // 8바이트

    // unsigned int는 0 이상의 값만 저장 가능
    unsigned int u = -1;
    cout << u << endl; // -1의 비트 패턴을 부호 없이 해석 -> 최대값 출력
    
    return 0;
}