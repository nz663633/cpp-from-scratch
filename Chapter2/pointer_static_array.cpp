#include <iostream>

using namespace std;

// 함수의 파라미터로 배열이 들어오면 내부적으로 포인터로 처리
// void printArray(int array[]) -> 같은 선언 방법
void printArray(int *array)
{
    cout << "== printArray ==" << endl;
    cout << sizeof(array) << endl;
    cout << *array << endl;

    *array = 100;
}

struct MyStruct
{
    int array2[5] = {2, 4, 6, 8, 10};
};

void doSomething(MyStruct ms)
{
    // array2는 구조체의 멤버 배열
    // 배열 전체 크기 출력
    // 포인터 자체 크기 출력 X
    cout << sizeof(ms.array2) << endl;
}

int main()
{
    int array[5] = {9, 7, 5, 3, 1};

    cout << "== array ==" << endl;
    cout << array << endl; // array는 배열의 첫 번째 원소의 주소로 변환된다
    cout << &(array[0]) << endl;
    cout << *array << endl;
    cout << sizeof(array) << endl;

    int *ptr = array; // *를 사용한 포인터 변수 선언
    cout << "== ptr ==" << endl;
    cout << ptr << endl;         // ptr이 가리키는 주소 -> array 주소
    cout << *ptr << endl;        // ptr이 가리키는 곳의 값 (dereferencing)
    cout << sizeof(ptr) << endl; // 포인터 변수 자체의 크기 출력

    printArray(array);
    cout << array[0] << " " << *array << endl;

    cout << "=====" << endl;

    char name[] = "jackjack";

    // 배열 name은 첫 번째 원소를 가리키는 포인터로 변환
    // name 배열의 첫 번째 값을 출력(dereferencing)
    cout << "name dereferencing: " << *name << endl;

    MyStruct ms;
    cout << ms.array2[0] << endl;

    // array2는 구조체의 멤버 배열이므로(클래스도 마찬가지)
    // 함수의 배열 매개변수처럼 포인터로 변환되지 않는다.
    cout << sizeof(ms.array2) << endl;
    doSomething(ms);

    return 0;
}