#include <iostream>

using namespace std;

enum class Colors
{
    BLACK,
    WHITE,
    RED,
    GREEN,
    BLUE
};

void printColorName(Colors color)
{
    switch (static_cast<int>(color))
    {
    case 0:
        cout << "BLACK";
        break;
    case 1:
        cout << "WHITE";
        break;
    case 2:
        cout << "RED";
        break;
    case 3:
        cout << "GREEN";
        break;
    case 4:
        cout << "BLUE";
        break;
    default:
        cout << "Unknown Color";
    }
    cout << endl;
}

int main()
{
    int x;
    cin >> x;
    printColorName(static_cast<Colors>(x));

    cout << "=====" << endl;
    return 0;
}