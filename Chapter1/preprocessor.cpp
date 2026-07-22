#include <iostream>
#include <algorithm> // 해당 라이브러리의 std::max() 함수 사용

using namespace std;

// 매크로는 일반적으로 대문자로 작성
#define MY_NUMBER 9
#define MAX(a, b) ((a > b) ? a : b)
#define LIKE_APPLE

void doSomething()
{
    #ifdef LIKE_APPLE // LIKE_APPLE이 존재하므로 true
        cout << "Apple" << endl;
    #else
        cout << "Orange" << endl;
    #endif
}

int main() 
{
    cout << MY_NUMBER << endl; // 위에서 미리 정의한 9를 출력
    cout << MAX(1, 2) << endl;
    cout << std::max(1 + 3, 2) << endl;

    doSomething();

    return 0;
}
