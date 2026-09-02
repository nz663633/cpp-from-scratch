#include <iostream>
#include <string>

using namespace std;

struct Person
{
    double height;
    float weight;
    int age;
    string name;

    void printPerson() // 구조체 Person을 파라미터로 받지 않아도 됨
    {
        cout << height << ", " << weight << ", " << age << ", " << name;
        cout << endl;
    }
};

// 구조체 안에 구조체 삽입 가능
struct Family
{
    Person me, mom, dad;
};

// Employee를 표현하는데 최소 2 + 4 + 8 = 14바이트가 필요
// padding: CPU의 메모리 접근 효율을 위해 멤버 사이에 빈 공간(바이트)을 삽입하는 정렬 방식
// 2 + (2) + 4 + 8 = 16
struct Employee
{
    short id;    // 2바이트
    int age;     // 4바이트
    double wage; // 8바이트
};

Person getSister()
{
    Person sister{160, 50.0, 217, "Amy"};

    return sister;
}

int main()
{
    Person me{170, 70.0, 20, "Jack"};
    Person me2(me);
    // printPerson(me);
    me.printPerson();
    me2.printPerson();

    Person sister_from_func = getSister();
    sister_from_func.printPerson();

    cout << "=====" << endl;

    Employee emp1;
    cout << sizeof(Employee) << endl; // 16

    return 0;
}