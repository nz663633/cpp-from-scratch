#include <iostream> // cout, cin, endl, ...
#include <cstdio> // printf

int main()
{
    using namespace std;

    // cin: console로부터 입력받음

    int x = 1;

    cout << "Before your input, x was " << x << endl;

    cin >> x;

    cout << "Your input is " << x << endl;

    return 0;
}