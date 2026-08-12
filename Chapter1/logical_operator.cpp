#include <iostream>

int main()
{
    using namespace std;

    // logical NOT
    bool x = true;
    cout << !x << endl;

    cout << "=====" << endl;

    // logical AND
    // logical OR
    bool a = true;
    bool b = false;
    cout << (a && b) << endl;
    cout << (a || b) << endl;

    cout << "=====" << endl;

    int i = 1;
    int j = 2;

    // 조건문(1)의 경우
    // j의 현재 값 2를 비교에 사용 -> 그 다음에 j를 3으로 증가
    if (i == 1 && j++ == 2)
    {
        // do something
    }

    // 조건문(2)의 경우
    // i = 2 가 false이므로 j++ 자체가 실행되지 않는다
    // 해당 조건문 이후 j의 출력 결과는 그대로 2이다
    // if (i == 2 && j++ == 2)
    // {
    //     // do something
    // }

    cout << j << endl;

    return 0;
}