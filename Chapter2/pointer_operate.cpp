#include <iostream>

using namespace std;

int main()
{
    double value = 7.0;
    double *ptr = &value;

    // uintptr_t: 포인터(주소)를 정수로 변환해서 저장
    // int인 경우 4씩 증가, double인 경우 8씩 증가
    cout << uintptr_t(ptr) << endl; // ptr 주소
    cout << uintptr_t(ptr + 1) << endl;
    cout << uintptr_t(ptr + 2) << endl;

    cout << "=====" << endl;

    // 배열의 값 주소는 서로 나열되어 있음
    int array[] = {9, 7, 5, 3, 1};

    int *ptr2 = array; // ptr2는 array[0]의 주소를 가지고 있음

    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " " << (uintptr_t)&array[i] << endl;
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr2 + i) << " " << (uintptr_t)(ptr2 + i) << endl;
    }

    cout << "=====" << endl;

    char name[] = "Jack jack";

    // name에 들어있는 알파벳 개수 구하기(null 포함)
    const int n_name = sizeof(name) / sizeof(name[0]);

    for (int i = 0; i < n_name; i++)
    {
        cout << *(name + i);
    }
    cout << endl;

    // name 마지막에 null 출력하지 않기
    int i = 0;

    while (i < n_name)
    {
        if (*(name + i) == '\0')
            break;
        cout << *(name + i);

        i++;
    }

    return 0;
}