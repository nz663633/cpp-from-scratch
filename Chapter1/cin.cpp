#include <iostream> // cout, cin, endl, ...
#include <cstdio>   // printf

using namespace std;

int getInt()
{
    while (true)
    {
        cout << "Enter an integer number: ";
        int a;
        cin >> a;

        // 입력이 실패했을 경우
        if (std::cin.fail())
        {
            std::cin.clear(); // cin을 초기화
            std::cin.ignore(32767, '\n');
            cout << "Invalid operator, please try again" << endl;
        }
        else
        {
            std::cin.ignore(32767, '\n');
            return a;
        }
    }
}

char getOperator()
{
    while (true)
    {
        cout << "Enter an operator (+, -): ";
        char op;
        cin >> op;
        // cin >>은 첫번째 공백 전까지의 값을 변수 op에 저장함
        // std::cin.ignore() -> 나머지 입력 버퍼에 남아있는 불필요한 문자들을 지워서 비워줌
        // 버퍼 안에서 '\n'을 만나면 '\n'까지의 입력을 지우고 멈출 것
        std::cin.ignore(32767, '\n');

        if (op == '+' || op == '-')
            return op;
        else
            cout << "Invalid operator, please try again" << endl;
    }
}

void printResult(int a, char op, int b)
{
    if (op == '+')
        cout << a + b << endl;
    else if (op == '-')
        cout << a - b << endl;
    else
        cout << "Invalid operator" << endl;
}

int main()
{
    // cin>> 연산자는 공백(스페이스바, 탭, 엔터)을 기준으로 입력을 구분

    int x = 1;

    cout << "Before your input, x was " << x << endl;
    cin >> x;
    cout << "Your input is " << x << endl;

    cout << "=====" << endl;

    int a = getInt();
    char op = getOperator();
    int b = getInt();

    printResult(a, op, b);

    return 0;
}