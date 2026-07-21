#include <iostream>

using namespace std;

// 컴파일러는 위에서 아래로 읽음
// 함수를 호출하기 전에 컴파일러가 함수의 존재를 알아야 함

// 함수 전방 선언(forward declaration)
int add(int a, int b);
int multiply(int a, int b);
int subtract(int a, int b);

int main()
{
    cout << add(1, 2) << endl;
    cout << subtract(4, 3) << endl;

    return 0;
}

// 함수 정의(definition)
int add(int a, int b) 
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int subtract(int a, int b)
{
    return a - b;
}