#include <iostream>

using namespace std;

#define NUM_STUDENTS 100000

// 배열을 함수의 파라미터로 넣어 줄 수 있다
// 배열을 함수의 인자로 전달할 때, 배열의 첫번째 요소의 주소(포인터)만 전달됨
// 해당 함수 파라미터의 변수는 배열이 아니고 포인터로 처리한다
void doSomething(int students_scores[])
{
    cout << "== doSomething() ==" << endl;

    // 포인터 변수 자신이 실제 위치한 메모리 주소 출력
    cout << &students_scores << endl;
    cout << &students_scores[0] << endl;
    cout << students_scores[0] << endl;
    cout << students_scores[1] << endl;
    cout << students_scores[2] << endl;

    // 포인터의 크기 출력
    cout << "Size in doSomething: " << sizeof(students_scores) << endl;
}

int main()
{
    const int num_students = 20;
    // cin >> num_students;

    int students_scores[num_students] = {1, 2, 3, 4, 5};

    // 배열의 경우, 변수명 자체가 주소로 사용됨(주소 연산자를 붙이지 않아도 됨)
    cout << students_scores << endl;
    cout << &students_scores << endl;

    cout << students_scores[0] << endl;
    cout << students_scores[1] << endl;
    cout << students_scores[2] << endl;

    cout << "Size in main: " << sizeof(students_scores) << endl;

    doSomething(students_scores);

    return 0;
}