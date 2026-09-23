#include <iostream>
#include <limits>
#include <algorithm>

using namespace std;

int main()
{
    int fibonacci[] = {0, 1, 2, 3, 5, 8, 13,
                       23, 34, 55, 89};

    // change array values
    // auto는 컴파일러가 변수의 타입을 자동으로 추론
    // &를 사용하여 배열 요소를 복사하지 않고 원본을 그대로 참조
    for (auto &number : fibonacci)
        number *= 10;

    // output
    // fibonacci 배열의 값을 읽기만 하므로 const auto &number
    for (const auto &number : fibonacci)
        cout << number << " ";
    cout << endl;

    // max_number = int가 가질 수 있는 가장 작은 값
    int max_number = std::numeric_limits<int>::lowest();

    // 최댓값 구하기
    for (const auto &n : fibonacci)
        // max_number랑 n 중에서 더 큰 값을 max_number에 저장
        max_number = std::max(max_number, n);

    cout << max_number << endl;

    return 0;
}