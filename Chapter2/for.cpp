#include <iostream>

int pow(int base, int exponent)
{
    int result = 1;

    for (int i = 0; i < exponent; i++)
    {
        result *= base;
        // result = result * base;
    }

    return result;
}

int main()
{
    using namespace std;

    for (int count = 0; count < 10; ++count)
    {
        cout << count << endl;
    }

    // cout << count << endl;

    cout << "=====" << endl;

    cout << pow(2, 4) << endl;

    cout << "=====" << endl;

    for (int i = 9; i >= 0; i--)
    {
        cout << i << endl;
    }

    cout << "=====" << endl;

    // 변수 선언 및 증감식을 여러 개 사용 가능
    for (int i = 0, j = 0; i < 10; i++, j--)
    {
        cout << i << ", " << j << endl;
    }

    cout << "=====" << endl;

    // i가 0이 되어 0을 출력한 뒤 증감식을 실행했을 때 문제 발생
    // i는 부호 없는 정수이므로 음수 값을 가질 수 없기 때문에 언더플로우 발생(무한 루프)
    // for (unsigned int i = 9; i >= 0; i--)
    // {
    //     cout << i << endl;
    // }

    // i가 0이 되는 순간 증감식을 실행하지 않기 때문에 루프가 종료됨
    for (unsigned int i = 10; i > 0; i--)
    {
        cout << i - 1 << endl;
    }

    return 0;
}