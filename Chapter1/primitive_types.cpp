#include <iostream>

int main()
{
    using namespace std;

    bool bValue = true;
    cout << bValue << endl; // true는 1, false는 0으로 출력
    cout << (bValue ? 1 : 0) << endl;

    char chValue1 = 'A';
    char chValue2 = 65; // 정수 65를 문자 'A'로 저장
    cout <<int(chValue1) << endl; // ASCII 코드값 65 출력
    cout << chValue2 << endl; // 저장된 문자 'A' 출력

    float fValue = 3.141592f; // float는 뒤에 f를 붙임
    double dValue = 3.141592;
    cout << fValue << endl;
    cout << dValue << endl;

    auto aValue1 = 3.141592;   
    auto aValue2 = 3.141592f;
    cout << aValue1 << endl;
    cout << sizeof(aValue1) << endl; // 8바이트(double)
    cout << sizeof(aValue2) << endl; // 4바이트(float)

    cout << sizeof(bool) << endl;

    // 변수 초기화 방법
    int a = 123;
    int b(123); // direct initialization
    int c{ 123 }; // uniform initialization
    
    return 0;
}