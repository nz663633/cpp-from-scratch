#include <iostream>

int main()
{
    int x = 1;
    x = x + 2;
    std::cout << x << std::endl; // 3

    int y = x;
    std::cout << y << std::endl; // 3

    std::cout << x + y << std::endl; // 6

    std::cout << x << std::endl; // 3

    int z; // 변수 초기화하지 않음
    std::cout << z << std::endl; // 가비지 값 출력

    return 0;
}