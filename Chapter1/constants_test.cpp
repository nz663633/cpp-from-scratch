#include <iostream>
#include "constants.h"

using namespace std;

void doSomething();

int main()
{
    cout << Constants::pi << ", " << &Constants::pi << endl;
    doSomething();

    return 0;
}