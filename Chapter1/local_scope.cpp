#include <iostream>

using namespace std;

int main()
{
    int x = 0;

    // &x: 변수 x의 주소
    cout << x << " " << &x << endl;

    {
        int x = 1;
        cout << x << " " << &x << endl;
    }

    cout << x << " " << &x << endl;
}