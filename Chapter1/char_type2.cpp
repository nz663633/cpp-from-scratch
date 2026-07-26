#include <iostream>
#include <limits>

int main()
{
    using namespace std;

    char c(65);

    // abc 입력, 입력 버퍼에 남아 있는 문자를 다음 cin이 읽음
    cin >> c; // 읽은 것: a, 남은 버퍼: b c \n
    cout << c << " " << static_cast<int>(c) << endl; // a 97

    cin >> c; // 버퍼에 남아 있던 b 가져옴, 새로 입력 받지 않음
    cout << c << " " << static_cast<int>(c) << endl; // b 98

    cout << "=====" << endl;
    cout << sizeof(c) << endl;
    
    // char형의 최댓값과 최솟값 출력
    cout << (int)std::numeric_limits<char>::max() << endl;
    cout << (int)std::numeric_limits<char>::lowest() << endl;

    cout << "=====" << endl;
    cout << sizeof(unsigned char) << endl;

    // unsigned char: 음수가 아닌 정수(부호 X)
    // unsigned char형의 최댓값과 최솟값 출력
    cout << (int)std::numeric_limits<unsigned char>::max() << endl;
    cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;

    cout << "=====" << endl;
    cout << int('\n') << endl; // '\n'의 아스키코드 값: 10
    cout << "This is first line \nsecond line";
    
    // std::flush -> 출력 버퍼를 즉시 비움(바로 화면에 출력, 줄바꿈 X)
    cout << "This is first line " << std::flush; 
    cout << "second line";

    return 0;
}