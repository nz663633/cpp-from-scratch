#include <iostream>
#include <vector>
#include <cstdint> // 고정 크기 정수형을 사용하기 위한 헤더

int main()
{
    using namespace std;

    // double이라는 기본 자료형에 distance_t라는 가명을 붙여줌
    // 타입을 바꾸고 싶을 때 해당 선언문 한 줄만 수정하면 프로젝트 전체 적용가능
    typedef double distance_t;

    // 8비트(1바이트) 크기를 가지는 정수 변수 i 선언
    // int8_t -> signed char 과 동일 -> cout 실행시 문자로 출력(ASCII)
    int8_t i(97); // a
    cout << i << endl;
    cout << static_cast<int>(i) << endl;

    distance_t home2work;
    distance_t home2school;

    cout << "=====" << endl;

    using pairlist_t = vector<pair<string, int>>;

    pairlist_t pairlist1;
    pairlist_t pairlist2;

    return 0;
}