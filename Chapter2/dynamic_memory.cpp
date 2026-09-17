#include <iostream>

using namespace std;

int main()
{
    // new int: 메모리에서 int 하나를 저장할 공간을 만들어 줄 것
    // 할당된 메모리의 주소를 반환
    // new 실패시, nothrow에 의해 ptr에 nullptr 대입
    int *ptr = new (nothrow) int;
    *ptr = 7;

    if (ptr)
    {
        cout << ptr << endl;
        cout << *ptr << endl;
    }

    // delete ptr: ptr이 가리키고 있는 동적으로 할당된 메모리를 반납
    delete ptr;
    ptr = nullptr; // 현재 ptr은 아무것도 가리키지 않는 상태임을 명시

    cout << "== After delete ==" << endl;
    if (ptr != nullptr)
    {
        cout << ptr << endl;
        cout << *ptr << endl;
    }
    cout << ptr << endl; // ptr 자체는 사라지지 않음, nullptr을 가리킴
    cout << endl;

    // memory leak
    while (true)
    {
        int *ptr2 = new int;
        cout << ptr2 << endl;

        // 반복이 끝나면 ptr2라는 지역변수는 사라짐
        // 하지만 new로 할당한 메모리는 자동으로 해제되지 않음
        // 계속 반복하면서 새로운 메모리를 할당하지만
        // delete로 아무것도 반납하지 않으므로 메모리 사용량이 계속 증가
    }

    return 0;
}