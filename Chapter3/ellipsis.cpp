#include <iostream>
#include <cstdarg>

using namespace std;

// ellipsis(...): 함수에 전달되는 인자의 개수를 유동적으로 처리
// 인자의 개수와 자료형을 자동으로 검사 X
double findAverage(int count, ...)
{
    double sum = 0;

    va_list list;

    va_start(list, count);

    for (int arg = 0; arg < count; arg++)
        sum += va_arg(list, int);

    va_end(list);

    return sum / count;
}

int main()
{
    cout << findAverage(4, 1, 2, 3, 'c', "Hello") << endl;
    cout << findAverage(3, 1, 2, 3) << endl;
    cout << findAverage(5, 1, 2, 3, 4, 5) << endl;
    cout << findAverage(10, 1, 2, 3, 4, 5) << endl;

    return 0;
}