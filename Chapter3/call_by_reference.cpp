#include <iostream>
#include <cmath> // sin(), cos()
#include <vector>

using namespace std;

void printElement(const vector<int> &arr)
{
}

// c++에서 const 참조가 임시 값이나 리터럴을 참조할 수 있도록 허용
void foo(const int &x) // x를 수정하지 않을 것
{
    cout << x << endl;
}

typedef int *pint;
void foo2(pint &ptr) // int *&ptr
{
    cout << ptr << " " << &ptr << endl;
}

// 값이 변하지 않을 변수들은 const로 고정시켜놓음
// degress는 입력, sin_out과 cos_out은 함수를 호출한 곳에 영향을 줌
void getSinCos(const double degrees, double &sin_out, double &cos_out)
{
    static const double pi = 3.141592 / 180.0; // 변수 재사용 가능(static)

    const double radians = degrees * pi;

    sin_out = sin(radians);
    cos_out = cos(radians);
}

void addOne(int &y)
{
    cout << "addOne: " << y << " " << &y << endl;
    y += 1;
}

int main()
{
    int x = 5;

    cout << x << " " << &x << endl;

    addOne(x); // 변수 x 자체를 인자로 전달함

    cout << x << " " << &x << endl;

    cout << "=====" << endl;

    double sin(0.0);
    double cos(0.0);

    getSinCos(30.0, sin, cos);

    cout << sin << ", " << cos << endl;

    cout << "=====" << endl;

    foo(6); // 6은 상수(리터럴)

    int a = 5;
    int *ptr = &a; // pint ptr = &a;

    foo2(ptr);

    cout << ptr << " " << &ptr << endl;

    cout << "=====" << endl;

    // int arr[]{1, 2, 3, 4};
    vector<int> arr{1, 2, 3, 4};

    printElement(arr);

    return 0;
}