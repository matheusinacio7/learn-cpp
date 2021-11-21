#include <iostream>

int getIntegerInput()
{
    std::cout << "Enter an integer: ";
    int input { };
    std::cin >> input;
    return input;
}
