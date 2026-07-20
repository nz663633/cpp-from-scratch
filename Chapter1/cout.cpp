#include <iostream> // cout, cin, endl, ...
#include <cstdio> // printf

int main()
{
    using namespace std; // std:: 생략 가능

    // cout: console로 출력함
    // endl: 줄바꿈(버퍼를 비움)

    int x = 1024;
    double pi = 3.141592;

    // \n: 다음 줄로 이동(std::endl과 유사, 버퍼를 비우지 않음)
    std::cout << "I love cpp!\n";
    std::cout << "x is " << x << ", pi is " << pi << std::endl;

    // \t: tab 문자를 출력하여 간격 띄움, 자동 줄맞춤 
    cout << "abc" << "\t" << "def" << std::endl;
    cout << "ab" << "\t" << "cdef" << std::endl;

    cout << "\a"; // 오디오 소리 출력

    // printf("I love cpp!\n");

    return 0;
}