#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    const unsigned int red_mask = 0xFF0000;
    cout << "red mask: " << bitset<32>(red_mask) << endl;

    const unsigned int green_mask = 0x00FF00;
    cout << "green mask: " << bitset<32>(green_mask) << endl;

    const unsigned int blue_mask = 0x0000FF;
    cout << "blue mask: " << bitset<32>(blue_mask) << endl;

    // 0xDAA520에서 green mask를 이용해 A5(green 값)를 추출하고 10진수로 변환
    // 0xDAA520에서 blue mask를 이용해 20(blue 값)를 추출하고 10진수로 변환
    unsigned int pixel_color = 0xDAA520;
    cout << bitset<32>(pixel_color) << endl;

    unsigned char green = (pixel_color & green_mask) >> 8;
    unsigned char blue = pixel_color & blue_mask;

    cout << "green: " << bitset<8>(green) << ", " << int(green) << endl;
    cout << "blue: " << bitset<8>(blue) << ", " << int(blue) << endl;

    return 0;
}