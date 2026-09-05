#include <iostream>

using namespace std;

int main()
{
    cout << "while-loop test" << endl;

    int count = 0;
    while (count < 10)
    {
        cout << count << endl;
        count++;

        if (count == 10)
            break;
    }

    cout << "=====" << endl;

    unsigned int x = 10;

    // unsigned int는 음수가 될 수 없어 무한 루프 발생 (언더플로우)
    // while (x >= 0)
    // {
    //     if (x == 0)
    //         cout << "zero";
    //     else
    //         cout << x << " ";

    //     x--;
    // }

    int y = 1;

    while (y < 100)
    {
        if (y % 5 == 0)
            cout << "Hello, " << y << endl;

        y++;
    }

    cout << "=====" << endl;

    int outer_count = 1;

    while (outer_count <= 5)
    {
        int inner_count = 1;

        while (inner_count <= outer_count)
        {
            cout << inner_count++ << " ";
        }

        cout << endl;
        ++outer_count;
    }

    return 0;
}