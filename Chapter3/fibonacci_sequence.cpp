// 재귀함수 호출을 사용하여 피보나치 수열 만들기

#include <iostream>

using namespace std;

int printFunction(int num)
{
    int sum = 0;

    // 첫 번째 항과 두 번째 항을 1로 정의
    if (num == 1 || num == 2)
    {
        return 1;
    }

    sum = printFunction(num - 1) + printFunction(num - 2);

    return sum;
}

int main()
{
    // 피보나치 수열 1,1,2,3,5,8...

    int num = 6;

    cout << printFunction(num) << endl;

    return 0;
}