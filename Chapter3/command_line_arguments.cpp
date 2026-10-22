#include <iostream>
#include <string>

using namespace std;

// command line arguments
// 프로그램을 실행할 때 명령어 뒤에 함께 전달하는 값
// argc: 명령줄 인자의 개수
// argv: 명령줄 인자들을 저장한 문자열 포인터 배열
int main(int argc, char *argv[])
{
    for (int count = 0; count < argc; count++)
    {
        string argv_single = argv[count];

        // argv[0]은 실행 파일 이름
        if (count == 1)
        {
            // string to integer
            int input_number = stoi(argv_single);
            cout << input_number + 1 << endl;
        }
        else
            cout << argv_single << endl;
    }

    return 0;
}