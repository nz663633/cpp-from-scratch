#include <iostream>

int main()
{
    using namespace std;

    // 기존 enum의 단점: 정수로 암시적 형변환, 이름 충돌
    // 열거형의 단점을 보완해주는 enum class
    enum class Color
    {
        RED,
        BLUE
    };

    enum class Fruit
    {
        BANANA,
        APPLE
    };

    Color color1 = Color::RED;
    Color color2 = Color::BLUE;
    // Fruit fruit = Fruit::BANANA;

    // if (color1 == fruit) -> 서로 다른 enum class 간 비교 불가

    if (color1 == color2)
        cout << "Same color" << endl;
    else
        cout << "Different color" << endl;
}