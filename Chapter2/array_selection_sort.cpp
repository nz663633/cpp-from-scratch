#include <iostream>

using namespace std;

void printArray(const int array[], const int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    const int length = 5;
    int array[length] = {3, 5, 2, 1, 4};

    printArray(array, length);

    // swap
    int temp = array[0];
    array[0] = array[1]; // 0번 인덱스에 1번 인덱스의 값을 대입
    array[1] = temp;     // 1번 인덱스에 temp에 임시로 저장해놓은 0번 인덱스 값을 대입

    printArray(array, length);

    cout << "=====" << endl;

    // Selection sort
    for (int startIndex = 0; startIndex < length - 1; startIndex++)
    {
        // 첫번째 인덱스를 가장 작은 값이라고 가정
        int smallestIndex = startIndex;

        for (int currentIndex = startIndex + 1; currentIndex < length; currentIndex++)
        {
            if (array[smallestIndex] > array[currentIndex])
            {
                smallestIndex = currentIndex;
            }
        }
        {
            // swap
            int temp = array[smallestIndex];
            array[smallestIndex] = array[startIndex];
            array[startIndex] = temp;
        }

        printArray(array, length);
    }

    // Bubble sort

    return 0;
}