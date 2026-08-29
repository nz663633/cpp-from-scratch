#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    const char my_strs[] = "Hello, World"; // C 스타일
    const string my_hello("Hello, World"); // C++ 스타일

    // 정수(123)은 std::string 타입에 직접 대입할 수 없음
    // string my_ID = 123;
    string my_ID = "123"; // 문자열 형태로 대입

    cout << my_strs << endl;
    cout << my_hello << endl;

    cout << "=====" << endl;

    cout << "Your age? : ";
    int age;
    cin >> age; // 입력 받은 정수 뒤에 엔터(\n)는 입력 버퍼에 남아있음
    // cin >> 연산자는 필요한 데이터만 가져오고 줄바꿈 문자는 버퍼에 그대로 남겨둠
    // cin으로 age을 입력 후 getline을 쓰기 전에 입력 버퍼를 비워줘야함
    // std::getline(std::cin, age);

    // \n이 오기 전까지 32767 글자를 무시할 것
    // std::cin.ignore(32767, '\n');

    // 버퍼 크기가 최대 크기만큼 또는 줄바꿈 문자(\n)를 만날 때까지 버퍼에서 모든 문자를 지움
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    cout << "Your name? : ";
    string name;
    // cin >> name;
    std::getline(std::cin, name); // 공백을 포함하여 한 줄 전체(\n 전까지)를 입력받음

    cout << name << ", " << age << endl;

    cout << "=====" << endl;

    string a("Hello, ");
    string b("World! ");
    string hw = a + b; // append

    hw += "I'm good";

    cout << hw << endl;
    cout << hw.length() << endl;

    return 0;
}