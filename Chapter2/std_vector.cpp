#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // vector: 여러 개의 같은 자료형 데이터를 연속적으로 저장
    // 배열 크기 적지 않아도 됨, 크기를 동적으로 변경 가능
    vector<int> array;

    vector<int> array2 = {1, 2, 3, 4, 5};
    cout << array2.size() << endl;

    vector<int> array3 = {10, 20, 30};
    cout << array3.size() << endl;

    vector<int> array4{1, 2, 3};
    cout << array4.size() << endl;

    array2.resize(10);
    // array2.resize(2); // 사이즈 줄이기 가능

    for (auto &itr : array2)
        cout << itr << " ";
    cout << endl;

    cout << array3[1] << endl;
    cout << array3.at(1) << endl;

    // vector는 동적으로 할당한 메모리를 해제
    // delete [] array2;

    return 0;
}