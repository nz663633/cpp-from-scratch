#include <iostream>

int main() {
    int x = 123; // initialization, 변수는 항상 초기화 할 것
    x = 5; // assignment

    std::cout << x << std::endl;
    std::cout << &x << std::endl; // x를 16진수로 변환해서 출력

    return 0;
}