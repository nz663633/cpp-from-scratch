#include <iostream>

int main()
{
    using namespace std;

    int num;

    cin >> num;
    cout << "input number: " << num << endl;

    if (num == 0)
    {
        cout << "0을 입력했습니다." << endl;
    }
    else if (num % 2 != 0)
    {
        cout << "홀수" << endl;
    }
    else
    {
        cout << "짝수" << endl;
    }

    return 0;
}