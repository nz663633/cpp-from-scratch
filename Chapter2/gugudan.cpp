#include <iostream>

using namespace std;

int main()
{
    // while문으로 구구단 출력하기
    int a = 1, b;

    while (a < 10)
    {
        // 단이 바뀔 때마다 b의 값을 1로 초기화
        b = 1;

        while (b < 10)
        {
            cout << a << " x " << b << " = " << a * b << endl;
            b++;
        }
        cout << "=====" << endl;
        a++;
    }

    // for문으로 구구단 출력하기
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << "=====" << endl;
    }

    return 0;
}