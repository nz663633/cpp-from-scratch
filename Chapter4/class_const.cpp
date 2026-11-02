#include <iostream>
#include <string>

using namespace std;

class Something
{
public:
    int m_value = 0;
    string m_value2 = "default";

    // 기본 생성자
    Something()
    {
        cout << "Constructor" << endl;
    }

    // 복사 생성자
    Something(const Something &st_in)
    {
        m_value = st_in.m_value;

        cout << "Copy Constructor" << endl;
    }

    // 뒤에 const를 붙이면 해당 함수 내부에서 값 변경 불가
    void setValue(int value)
    {
        m_value = value;
    }

    // 해당 함수 내부에서 객체의 멤버 변수 값을 변경하지 않겠다는 뜻
    int getValue() const
    {
        // m_value = 10;
        return m_value + 10; // 반환값은 변경 가능
    }

    // 반환 자료형 const: 반환되는 문자열 수정 X
    // 함수 뒤의 const: 함수 내부에서 객체의 일반적인 멤버 변수 수정 X
    const string &getValue2() const
    {
        cout << "const version" << endl;
        return m_value2;
    }

    string &getValue2()
    {
        cout << "non-const version" << endl;
        return m_value2;
    }
};

void print(Something st)
{
    cout << &st << endl;
    cout << st.getValue() << endl;
}

int main()
{
    const int i = 0;
    // i = 1;

    const Something something; // 인스턴스 생성
    // something.setValue(3);

    cout << something.getValue() << endl;

    cout << "=====" << endl;

    Something something2;

    cout << &something2 << endl;

    print(something2);

    cout << "=====" << endl;

    // const인지 아닌지에 따라 오버로딩 가능

    Something something3; // 일반 객체
    something3.getValue2(); // const가 없는 멤버 함수 우선 선택

    // const 객체는 자신의 멤버 변수를 변경할 가능성이 있는
    // 일반 멤버 함수를 호출할 수 없다.
    const Something something4; // const 객체
    something4.getValue2();

    // const를 붙일 수 있는 곳에 const를 최대한 붙이는 것이 좋다.

    return 0;
}