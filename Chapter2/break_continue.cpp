#include <iostream>

using namespace std;

void breakOrReturn()
{
    while (true)
    {
        char ch;
        cin >> ch;

        if (ch == 'b')
            // break는 자신이 속한 가장 가까운 반복문을 탈출
            // break 실행 후 Hello 출력
            break;

        if (ch == 'r')
            // 자신을 감싸고 있는 함수 전체를 즉시 종료하고
            // 호출한 곳으로 돌아감
            return;
    }

    cout << "Hello" << endl;
}

int main()
{
    breakOrReturn();

    cout << "=====" << endl;

    for (int i = 0; i < 10; i++)
    {
        // i가 짝수일 경우, if문 빠져나옴
        // 아래 실행문 건너뜀
        if (i % 2 == 0)
            continue;

        cout << i << endl;
    }

    cout << "=====" << endl;

    int count(0);

    do
    {
        if (count == 5)
            continue;

        cout << count << endl;

    } while (count++ < 10);

    cout << "=====" << endl;

    int num = 0;
    // bool escape_flag = false;

    while (true)
    {
        char c;
        cin >> c;

        cout << c << ", " << num << endl;

        if (c == 'x')
            // escape_flag = true;
            break;
    }

    return 0;
}