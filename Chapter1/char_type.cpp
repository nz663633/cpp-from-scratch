#include <iostream>

int main()
{
    using namespace std;

    char c1(65);
    char c2('A'); // 문자 하나를 표현할 때는 작은 따옴표

    // 숫자로 초기화해도 c1은 문자형 타입이기 때문에 'A'로 출력
    cout << c1 << " " << c2 << endl;

    // c++ 스타일 캐스팅
    // c1, c2를 int형으로 변환
    cout << int(c1) << " " << int(c2) << endl;

    cout << "=====" << endl;

    // static_cast를 이용한 기본 자료형 간의 형 변환
    cout << static_cast<char>(65) << endl;
    cout << static_cast<int>('A') << endl;

    char ch(97);
    cout << ch << endl;
    cout << static_cast<int>(ch) << endl;
    cout << ch << endl;

    return 0;
}