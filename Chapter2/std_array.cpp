#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void printLength(const array<int, 5> &my_arr)
{
    cout << "printLength " << my_arr.size() << endl;
}

int main()
{
    // int array[5] = {1, 2, 3, 4, 5};

    // int 5개짜리 배열 생성
    array<int, 5> my_arr = {1, 2, 3, 4, 5};
    my_arr = {0, 1, 2, 3, 4};
    my_arr = {
        // 나머지 인덱스 3,4 원소는 0으로 초기화됨
        0,
        1,
        2,
    };

    cout << my_arr[2] << endl; // 범위 검사 X
    cout << my_arr.at(4) << endl; // 범위 검사 O, at()은 오류 발생시 예외 처리해줌
    cout << my_arr.size() << endl; // 원소 개수

    printLength(my_arr);

    array<int, 5> my_arr2 = {1, 21, 3, 40, 5};

    // 오름차순 정렬
    sort(my_arr2.begin(), my_arr2.end());
    
    // 내림차순 정렬
    sort(my_arr2.rbegin(), my_arr2.rend());

    for (auto &element : my_arr2) // 원소 복사 X, 참조 O
        cout << element << " ";
    cout << endl;

    return 0;
}
