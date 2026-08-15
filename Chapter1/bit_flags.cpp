#include <iostream>
#include <bitset>

int main()
{
    using namespace std;

    // bool item1_flag = false;
    // bool item2_flag = false;
    // bool item3_flag = false;
    // bool item4_flag = false;

    const unsigned char opt0 = 1 << 0;
    const unsigned char opt1 = 1 << 1;
    const unsigned char opt2 = 1 << 2;
    const unsigned char opt3 = 1 << 3;
    cout << bitset<8>(opt0) << endl;
    cout << bitset<8>(opt1) << endl;
    cout << bitset<8>(opt2) << endl;
    cout << bitset<8>(opt3) << endl;

    cout << "=====" << endl;

    unsigned char items_flag = 0;
    cout << "No item " << bitset<8>(items_flag) << endl;

    // item0 get
    items_flag |= opt0;
    cout << "Item0 obtained " << bitset<8>(items_flag) << endl;

    // item3 get
    items_flag |= opt3;
    cout << "Item3 obtained " << bitset<8>(items_flag) << endl;

    // item3 lost
    items_flag &= ~opt3;
    cout << "Item3 obtained " << bitset<8>(items_flag) << endl;

    cout << "=====" << endl;

    // has item1 ?
    if (items_flag & opt1)
    {
        cout << "Has item1" << endl;
    }
    else
    {
        cout << "Not have item1" << endl;
    }

    // has item0 ?
    if (items_flag & opt0)
    {
        cout << "Has item0" << endl;
    }

    // obtain item 2, 3
    items_flag |= (opt2 | opt3);
    cout << bitset<8>(opt2 | opt3) << endl;
    cout << "Item2, 3 obtained " << bitset<8>(items_flag) << endl;

    return 0;
}