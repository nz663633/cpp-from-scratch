#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int width;
};

int main()
{
    int one_student_score;
    int student_scores[5];

    cout << sizeof(one_student_score) << endl;
    cout << sizeof(student_scores) << endl; // 4바이트 * 5 = 20

    cout << "=====" << endl;

    one_student_score = 70;

    student_scores[0] = 100;
    student_scores[1] = 80;
    student_scores[2] = 90;
    student_scores[3] = 50;
    student_scores[4] = 0;
    // student_scores[5] = 30;

    cout << student_scores[0] << endl;
    cout << student_scores[1] << endl;
    cout << student_scores[2] << endl;
    cout << student_scores[3] << endl;
    cout << student_scores[4] << endl;
    // cout << student_scores[5] << endl;

    cout << (student_scores[0] + student_scores[1]) / 2.0 << endl;

    cout << "=====" << endl;

    Rectangle rect_arr[10];

    cout << sizeof(Rectangle) << endl;
    cout << sizeof(rect_arr) << endl;

    cout << "=====" << endl;

    // 직접 초기화해주지 않으면 0으로 초기화 됨
    int my_array[5] = {1, 2, 3, 4, 5};

    cout << my_array[2] << endl;

    return 0;
}