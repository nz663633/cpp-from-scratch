#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char myString[] = "string";

    for (int i = 0; i < sizeof(myString); i++)
    {
        // 맨 마지막에 null 존재 -> 총 7개
        cout << myString[i] << '\t';
    }
    cout << endl;
    cout << sizeof(myString) << endl;

    cout << "=====" << endl;

    char myString2[255];

    cin >> myString2;
    myString2[0] = 'A';  // 첫번째 문자를 무조건 'A'로 바꿔서 출력
    myString2[4] = '\0'; // 널 문자(\0)를 만나는 순간 출력 정지

    cout << myString2 << endl;

    cin.ignore(); // 입력 버퍼에 남아있는 \n 제거

    cout << "=====" << endl;

    char myString3[255];

    // \n를 칠 때까지의 모든 문자를 공백 포함해서 한꺼번에 읽어옴
    // myString3을 최대 255자까지 읽어옴(오버플로우 방지)
    cin.getline(myString3, 255);

    int idx = 0;
    while (true)
    {
        if (myString3[idx] == '\0')
            break;

        cout << myString3[idx] << " " << (int)myString3[idx] << endl;
        idx++;
    }
    
    cout << "=====" << endl;

    char source[] = "Copy this!";
    char dest[50];

    // 문자열 복사(source를 dest로 복사)
    strcpy(dest, source);
    cout << source << endl;
    cout << dest << endl;

    // 문자열 이어 붙이기(dest + source)
    strcat(dest, source);
    cout << source << endl;
    cout << dest << endl;

    // 문자열 비교(두 문자열을 ASCII 코드 순서대로 비교)
    cout << strcmp(source, dest) << endl;

    return 0;
}