#include <iostream>

using namespace std;

int main()
{
    int length;

    cin >> length;

    // int array[length];

    // 초기화 리스트가 배열 크기보다 많으면 컴파일 단계에서 오류 발생
    // 현재 초기화 리스트가 5개이므로 length는 5 이상이어야 함
    int *array = new int[length]{11, 22, 33, 44, 55};

    array[0] = 1;
    array[1] = 2;

    for (int i = 0; i < length; i++)
    {
        cout << (uintptr_t)&array[i] << endl;
        cout << array[i] << endl;
    }

    delete[] array;

    // 일반 배열 선언
    // 컴파일러가 {} 안의 요소 개수를 보고 크기 결정
    int fixedArray[] = {1, 2, 3, 4, 5};

    // new는 동적 메모리를 할당하는 표현식
    // 동적 배열을 new[]로 만들 때는 배열의 크기를 지정해야 함
    // int *array2 = new int[]{1, 2, 3, 4, 5};
    int *array2 = new int[5]{1, 2, 3, 4, 5};

    delete[] array2;

    return 0;
}