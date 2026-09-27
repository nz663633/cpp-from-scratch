#include <iostream>

using namespace std;

int main()
{
    int *ptr = nullptr;
    int **ptrptr = nullptr; // 포인터에 대한 포인터(이중 포인터)

    int value = 5;

    // ptrptr → ptr → value
    ptr = &value;
    ptrptr = &ptr;

    cout << ptr << " " << *ptr << " " << &ptr << endl;
    cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl;
    cout << *(*ptrptr) << endl;
    cout << endl;

    // 이차원 행열 구현

    const int row = 3;
    const int col = 5;

    const int s2da[row][col] =
        {
            // 1차원 배열 3개
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15}

    };

    // int *r1 = new int[col]{1, 2, 3, 4, 5};
    // int *r2 = new int[col]{6, 7, 8, 9, 10};
    // int *r3 = new int[col]{11, 12, 13, 14, 15};

    int **matrix = new int *[row];

    // 동적 2차원 배열 생성
    for (int r = 0; r < row; r++)
    {
        matrix[r] = new int[col];
    }

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            // s2da의 값을 matrix에 복사
            matrix[r][c] = s2da[r][c];
        }
    }

    // print all elements
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            cout << matrix[r][c] << " ";
        }
        cout << endl;
    }

    // delete
    for (int r = 0; r < row; r++)
    {
        delete[] matrix[r];
    }

    delete[] matrix;

    // delete[] r1;
    // delete[] r2;
    // delete[] r3;
    // delete[] rows;

    cout << "=====" << endl;

    // 1차원 배열 15개 만듦
    int *matrix2 = new int[row * col]; // new int[15]

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            matrix2[c + col * r] = s2da[r][c];
        }
    }

    return 0;
}