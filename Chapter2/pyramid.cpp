#include <iostream>

using namespace std;

int main()
{
    // while문으로 피라미드 만들기
    int a = 1, b;

    while (a <= 5) // 줄 번호
    {
        b = 1;

        while (b <= a) // 별 개수
        {
            cout << "*";
            b++;
        }
        cout << endl;
        a++;
    }

    cout << "=====" << endl;

    // for문으로 피라미드 만들기
    for (int i = 1; i <= 5; i++) // 줄 번호
    {
        for (int j = 1; j <= i; j++) // i개만큼(줄마다) 별 출력
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}