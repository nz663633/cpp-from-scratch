#include <iostream>
#include <typeinfo>
#include <string>

/*
int computeDamage(int weapon_id)
{
    if (weapon_id == 0) // sword
    {
        return 1;
    }
    if (weapon_id == 1) // hammer
    {
        return 2;
    }
}
*/

enum Color // 사용자 정의 자료형
{
    COLOR_BLACK,
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
    COLOR_SKYBLUE,
    // BLUE
};

enum Feeling
{
    HAPPY,
    JOY,
    TIRED,
    BLUE
};

int main()
{
    using namespace std;

    Color paint = COLOR_BLACK;
    Color house(COLOR_BLUE);
    Color apple{COLOR_RED};

    cout << paint << ", " << COLOR_BLACK << endl;
    cout << house << ", " << COLOR_BLUE << endl;
    cout << apple << ", " << COLOR_RED << endl;

    cout << "=====" << endl;

    int color_id = COLOR_SKYBLUE;
    Color my_color = static_cast<Color>(4); // 강제 캐스팅

    cout << "my_color: " << my_color << endl;

    return 0;
}