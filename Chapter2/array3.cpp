#include <iostream>

using namespace std;

int main()
{
    // const int num_students = 5;
    int scores[] = {84, 92, 76, 81, 56};

    // sizeof를 이용한 배열 요소 개수 동적 계산
    const int num_students = sizeof(scores) / sizeof(int);

    int min_score = 100;
    int max_score = 0;
    int total_score = 0;

    for (int i = 0; i < num_students; i++)
    {
        total_score += scores[i];
        min_score = (min_score > scores[i]) ? scores[i] : min_score;
        max_score = (max_score < scores[i]) ? scores[i] : max_score;
    }

    double avg_score = static_cast<double>(total_score) / num_students;

    cout << num_students << endl;
    cout << "점수의 합계: " << total_score << endl;
    cout << "평균 점수: " << avg_score << endl;
    cout << "가장 낮은 점수: " << min_score << endl;
    cout << "가장 높은 점수: " << max_score << endl;

    return 0;
}