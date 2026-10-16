#include <iostream>

using namespace std;

// 각 호출의 매개변수 count는 독립적
// 재귀 호출 종료시, 나중에 호출된 함수부터 종료됨(LIFO)
// 재귀 호출은 스택 오버플로우가 발생할 수 있음
void countDown(int count)
{
    cout << count << endl;
    cout << "address: " << &count << endl;

    if (count == 0)
        return;

    countDown(count - 1); // 재귀 호출
}

int sumTo(int num)
{
    if (num <= 0)
        return 0;
    else if (num <= 1)
        return 1;
    else
        return sumTo(num - 1) + num;
}

int main()
{
    countDown(2);
    cout << sumTo(3) << endl;

    return 0;
}