#include <iostream>
#include <array>
#include <tuple>

using namespace std;

/*
    // 포인터 반환
    int *getValue(int x)
    {
        // 해당 value는 지역변수
        int value = x * 2;
        return &value;
    }
*/

/*
    // 참조 반환의 잘못된 예시
    int &getValue2(int x)
    {
        int value = x * 2;
        
        // 지역변수 value에 대한 참조를 반환
        // -> 함수 종료 후 문제 발생
        return value;
    }
*/

int *allocateMemory(int size)
{
    return new int[size];
}

// 참조 반환의 올바른 예시
int &get(array<int, 100> &my_array, int idx)
{
    return my_array[idx];
}

// int와 double을 하나로 묶어서 반환
tuple<int, double> getTuple()
{
    int a = 5;
    double b = 3.14;

    return make_tuple(a, b); // make_tuple(10, 3.14)
}

int main()
{
    /*
        int *value = getValue(3);

        cout << *value << endl;

        int value2 = getValue2(5);

        cout << value2 << endl;
    */

    // int *array = new int[10];
    int *array = allocateMemory(100);

    delete[] array; // 직접 메모리 해제

    std::array<int, 100> my_array;

    // my_array[30] = 10;
    get(my_array, 30) = 10;
    cout << my_array[30] << endl;

    tuple<int, double> my_tp = getTuple();

    cout << get<0>(my_tp) << endl; // a (0번 인덱스)
    cout << get<1>(my_tp) << endl; // b (1번 인덱스)

    return 0;
}