#include "io.h";
#include <iostream>

int getIntegerInput()
{
    std::cout << "Enter an integer: ";
    int input { };
    std::cin >> input;
    return input;
}

void printAnswer(int answer)
{
    std::cout << "The result is: " << answer << '\n';
}
