#include "io.h";
#include <iostream>

int main()
{
    std::cout << "Basic adding calculator \n";
    int a { getIntegerInput() };
    int b { getIntegerInput() };
    printAnswer(a + b);
    return 0;
}
