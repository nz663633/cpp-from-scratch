#include <iostream>
#include <cstddef>

using namespace std;

void doSomething(double *ptr)
{
    if (ptr != nullptr)
    {
        cout << *ptr << endl;
    }
    else
    {
        cout << "Null ptr, do nothing" << endl;
    }
}

int main()
{
    // nullptr: 현재 가리키는 유효한 주소가 없는 포인터
    double *ptr = nullptr;

    doSomething(ptr);
    doSomething(nullptr);

    double d = 123.4;
    
    doSomething(&d);

    ptr = &d;

    doSomething(ptr);

    return 0;
}