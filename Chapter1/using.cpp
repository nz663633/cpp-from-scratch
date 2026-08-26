#include <iostream>

namespace a
{
    int my_var(10);
}

namespace b
{
    int my_var(20);
}

int main() 
{
    // using namespace는 특정 네임스페이스에서 정의된 모든 이름을
    // 접두사(네임스페이스::)없이 바로 사용할 수 있게 해주는 기능
    // 헤더파일(.h, .hpp)에서는 사용을 지양해야 함
    using namespace std;
    using namespace a;
    using namespace b;

    // a와 b 모두에 my_var가 존재하므로,
    // 모호성을 방지하기 위해 범위 지정 연산자(a::, b::)를 명시
    cout << a::my_var << endl;
    cout << b::my_var << endl;
}