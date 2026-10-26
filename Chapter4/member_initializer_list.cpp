#include <iostream>

using namespace std;

class B
{
private:
    int m_b;

public:
    B(const int &m_b_in)
        : m_b(m_b_in)
    {
    }
};

class Something
{
private:
    // 클래스의 멤버는 클래스에 선언된 순서대로 초기화됨
    // 생성자에서 별도로 초기화하지 않은 멤버는 선언 시 지정한 기본 초기값을 사용
    int m_i = 100;
    double m_d = 100.0;
    char m_c = 'F';
    int m_arr[5] = {100, 200, 300, 400, 500};
    B m_b{1024};

public:
    // 클래스 선언 시 지정한 기본 초기값과 생성자의 초기화 리스트가 모두 있으면,
    // 생성자의 초기화 리스트에 지정한 값으로 초기화됨
    Something()
        : m_i(1), m_d(3.14), m_c('a'), m_arr{1, 2, 3, 4, 5}, m_b(m_i - 1)
    {
        // m_i = 1;
        // m_d = 3.14;
        // m_c = 'a';
    }

    void print()
    {
        cout << m_i << " " << m_d << " " << m_c << " " << endl;
        for (auto &ele : m_arr)
            cout << ele << " ";
        cout << endl;
    }
};

int main()
{
    Something som;

    som.print();
}