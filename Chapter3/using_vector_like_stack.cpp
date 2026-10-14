#include <iostream>
#include <vector>

using namespace std;

void printStack(const vector<int> &stack)
{
    for (auto &e : stack)
        cout << e << " ";
    cout << endl;
}

int main()
{
    // int *v_ptr = new int[3]{1, 2, 3};
    vector<int> v{1, 2, 3};

    // vector의 실제 원소 개수 변경
    // v.resize(10);
    // v.resize(2);

    // reserve()를 사용해 미리 메모리 공간 확보
    // -> 원소 추가 시 불필요한 재할당 줄임
    v.reserve(1024);

    for (auto &e : v)
        cout << e << " ";
    cout << endl;

    // size()는 실제 원소의 개수
    // capacity는 저장 공간에 담을 수 있는 원소의 개수
    cout << v.size() << " " << v.capacity() << endl;

    // cout << v.at(2) << endl;

    int *ptr = v.data(); // 포인터 가지고 오기

    cout << ptr[2] << endl;

    cout << "=====" << endl;

    // push, pop

    vector<int> stack;

    stack.push_back(3);
    printStack(stack);

    stack.push_back(5);
    printStack(stack);

    stack.push_back(7);
    printStack(stack);

    stack.pop_back();
    printStack(stack);

    stack.pop_back();
    printStack(stack);

    stack.pop_back();
    printStack(stack);

    return 0;
}