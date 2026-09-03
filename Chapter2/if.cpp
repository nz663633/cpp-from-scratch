#include <iostream>

using namespace std;

int min(int x, int y)
{
    return (x > y) ? y : x;
}

int main()
{
    int x;
    cin >> x;

    if (x > 10)
    {
        cout << x << " is greater than 10" << endl;
    }
    else if (x < 10)
    {
        cout << x << " is less than 10" << endl;
    }
    else
    {
        cout << x << " is exactly 10" << endl;
    }

    cout << "=====" << endl;

    int a, b;
    cin >> a >> b;

    if (a > 0 && b > 0)
    {
        cout << "Both numbers are positive" << endl;
    }
    else if (a > 0 || b > 0)
    {
        cout << "One of the numbers is positive" << endl;
    }
    else
    {
        cout << "Neither number is positive" << endl;
    }

    cout << "=====" << endl;

    int i;
    cin >> i;

    if (i > 10)
    {
        cout << "A" << endl;
    }
    else if (i == -1)
    {
        return 0; // exit(0)
    }
    else if (i < 0)
    {
        cout << "B" << endl;
    }

    cout << "Hello" << endl;

    cout << "=====" << endl;

    int num1, num2;
    cin >> num1 >> num2;

    cout << min(num1, num2) << endl;

    return 0;
}