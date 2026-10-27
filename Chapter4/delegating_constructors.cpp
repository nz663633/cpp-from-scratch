#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int m_id;
    string m_name;

public:
    // 생성자가 생성자를 사용
    Student(const string &name_in)
        : Student(0, name_in)
    {
    }

    Student(const int &id_in, const string &name_in)
        : m_id(id_in), m_name(name_in)
    {
    }

    void print()
    {
        cout << m_id << " " << m_name << endl;
    }
};

int main()
{
    Student st1(0, "Jack Jack");
    st1.print();

    Student st2("HJ");
    st2.print();

    return 0;
}