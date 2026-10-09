#include <iostream>

using namespace std;

// inline 함수: 함수 호출 위치에 함수 코드 삽입하도록 컴파일러에 요청
// inline을 붙인다고 반드시 인라인 처리되는 것 X
// 함수 코드가 여러 곳에 삽입되면 실행 파일 크기가 커질 수 있음
inline int min(int x, int y)
{
    return x > y ? y : x;
}

int main()
{
    cout << min(5, 6) << endl;
    // cout << 5 > 6 ? 6 : 5 << endl;

    cout << min(3, 2) << endl;
    // cout << 3 > 2 ? 2 : 3 << endl;

    return 0;
}