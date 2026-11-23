// 비교 연산자 오버로딩

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;

class Cents
{
private:
    int m_cents;

public:
    Cents(int cents = 0) { m_cents = cents; }
    int getCents() const { return m_cents; }
    int &getCents() { return m_cents; }

    friend bool operator<(const Cents &c1, const Cents &c2)
    {
        return c1.m_cents < c2.m_cents;
    }

    friend bool operator==(const Cents &c1, const Cents &c2)
    {
        return c1.m_cents == c2.m_cents;
    }

    friend ostream &operator<<(ostream &out, const Cents &cents)
    {
        out << cents.m_cents;
        return out;
    }
};

int main()
{
    Cents cents1(6);
    Cents cents2(6);

    if (cents1 == cents2)
        cout << "Equal" << endl;

    cout << boolalpha;

    vector<Cents> arr(20);
    for (unsigned i = 0; i < 20; ++i)
        arr[i].getCents() = i;

    random_device rd;
    mt19937 g(rd());
    shuffle(arr.begin(), arr.end(), g);

    for (auto &e : arr)
        cout << e << " ";
    cout << endl;

    sort(arr.begin(), arr.end());

    for (auto &e : arr)
        cout << e << " ";
    cout << endl;

    return 0;
}