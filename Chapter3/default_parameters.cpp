#include <iostream>
#include <string>

using namespace std;

void print(int x = 10, int y = 20, int z = 30)
{
    cout << x << " " << y << " " << z << endl;
}

void print2(string str) {}
void print2(char ch = ' ') {}

void print3(int x) {}
void print3(int x, int y = 10) {}

int main()
{
    print();
    print(100);
    print(100, 200, 300);

    // 기본값이 있는 char 매개변수 함수 호출
    print2();

    // print3() 두 함수 모두 호출 가능한 상태
    // print3(10);

    return 0;
}