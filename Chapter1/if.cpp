#include <iostream>

bool isEqual(int a, int b)
{
    bool result = (a == b);

    return result;
}

int main()
{
    using namespace std;

    if (3 > 1)
    {
        cout << "This is true" << endl;
        cout << "True second line" << endl;
    }
    else
        cout << "This is false" << endl;

    cout << "=====" << endl;
    cout << std::boolalpha;
    cout << isEqual(1, 1) << endl;
    cout << isEqual(0, 3) << endl;

    cout << "=====" << endl;
    if (5) // if문은 0이면 false, 0이 아닌 모든 값 전부 true
    {
        cout << "True" << endl;
    }
    else
        cout << "False" << endl;

    cout << "=====" << endl;
    bool b;

    cin >> b; // bool 타입은 0 또는 1만 입력받을 수 있다.
    cout << "Your input: " << b << endl;

    return 0;
}