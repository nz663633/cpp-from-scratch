#include <iostream>

// 입력 파라미터는 auto 사용 불가능
auto add(int x, int y)
{
    return x + (double)y;
}

int main()
{
    using namespace std;

    // 변수를 초기화하지 않으면 auto 사용 불가능
    auto a = 123;
    auto d = 123.0;
    auto c = 1 + 2.0;
    auto result = add(1, 2);

    cout << "result: " << result << endl;
    cout << "type of result: " << typeid(result).name() << endl;

    return 0;
}