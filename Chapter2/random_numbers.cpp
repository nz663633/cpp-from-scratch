#include <iostream>
#include <cstdlib> // std::rand(), std::srand()
#include <ctime>   // std::time()
#include <random>

using namespace std;

int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (RAND_MAX + 1.0);

    return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

unsigned int PRNG()
{
    static unsigned int seed = 5523; // seed number

    // 오버플로우를 이용해 무작위 숫자처럼 보이는 패턴 생성
    seed = 8253729 * seed + 2396403;

    return seed % 32768; // 범위 0 ~ 32768
}

int main()
{
    // 난수처럼 보이는 숫자들 계산해서 연속 출력
    for (int count = 1; count <= 100; count++)
    {
        cout << PRNG() << "\t";

        if (count % 5 == 0)
            cout << endl;
    }

    cout << "==========" << endl;

    // loop 밖에서 딱 한 번만 실행하여 난수엔진 초기화
    // 디버깅을 위해서 seed 초기 설정 무조건 필요
    std::srand(5323); // 고정 seed 설정

    for (int count = 1; count <= 100; count++)
    {
        cout << std::rand() << "\t";

        if (count % 5 == 0)
            cout << endl;
    }

    cout << "==========" << endl;

    // 1초마다 변경되는 난수 생성(현재 시간을 seed로 사용)
    std::srand(static_cast<unsigned int>(std::time(0)));

    for (int count = 1; count <= 100; count++)
    {
        cout << std::rand() << "\t";

        if (count % 5 == 0)
            cout << endl;
    }

    cout << "==========" << endl;

    for (int count = 1; count <= 100; count++)
    {
        // 1 ~ 5까지의 난수 출력
        cout << getRandomNumber(1, 5) << "\t";

        if (count % 5 == 0)
            cout << endl;
    }

    cout << "==========" << endl;

    std::random_device rd;                      // 난수 seed 생성
    std::mt19937_64 mersenne(rd());             // 메르센 알고리즘 사용, 64비트 난수 생성 엔진
    std::uniform_int_distribution<> dice(1, 6); // 1이상 6이하의 숫자가 동일한 비율로 출력

    for (int i = 0; i < 10; i++)
        cout << dice(mersenne) << endl;

    // rd() -> 초기 seed 생성
    // mersenne(rd()) -> 난수 생성 엔진이 seed를 받아 거대한 무작위 정수를 연속으로 생성
    // dice(mersenne) 호출 -> 엔진이 준 거대한 정수를 1~6 사이의 균등한 정수로 변환해서 최종 출력

    return 0;
}