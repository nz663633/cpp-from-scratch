#include <iostream>
#include <string>

using namespace std;

int main()
{
    // 1. 문맥 오류
    int x;
    cin >> x;

    // 5는 포함되지 않아야 함 -> 논리 오류
    if (x >= 5)
        cout << "x is greater than 5" << endl;

    // 2. 범위 위반
    string hello = "Hello, my name is hyeonji";

    cout << "Input from 0 to " << hello.size() - 1 << endl;

    while (true)
    {
        int idx;
        cin >> idx;

        if (idx >= 0 && idx <= hello.size() - 1)
        {
            cout << hello[idx] << endl;
            break;
        }
        else
            cout << "Please try again!" << endl;
    }

    return 0;
}