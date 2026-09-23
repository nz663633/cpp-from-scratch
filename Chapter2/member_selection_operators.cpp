#include <iostream>

using namespace std;

struct Person
{
    int age;
    double weight;
};

int main()
{
    Person person;

    // person.age = 5;
    // person.weight = 30;

    Person &ref = person;
    ref.age = 15;
    ref.weight = 30;

    Person *ptr = &person;
    ptr->age = 30; // 포인터 사용할 때는 ->
    (*ptr).weight = 60; // ?

    Person &ref2 = *ptr; // ?
    ref2.age = 45; // 참조 사용할 때는 .

    cout << &person << endl;
    cout << &ref2 << endl;

    return 0;
}