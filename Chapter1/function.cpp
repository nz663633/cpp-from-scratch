#include <iostream>

using namespace std;

int addTwoNumbers(int num_a, int num_b)
{
    int sum = num_a + num_b;
    
    // 반환값의 타입과 함수의 반환 타입이 동일하거나 변환 가능해야함
    return sum;
}

void print()
{
    cout << "Hello" << endl;
}

void printHelloWorld() // 반환값이 없을 경우 void
{
    cout << "Hello World!" << endl;
    print(); // print() 함수가 미리 선언되거나 정의되어 있어야 함
    // return;
}

int main()
{
    cout << addTwoNumbers(1, 2) << endl;
    cout << addTwoNumbers(3, 4) << endl;
    cout << addTwoNumbers(8, 13) << endl;

    printHelloWorld();

    return 0;
}