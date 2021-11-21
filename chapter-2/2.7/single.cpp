#include <iostream>

int getIntegerInput()
{
    std::cout << "Enter an integer: ";
    int input { };
    std::cin >> input;
    return input;
}

int main()
{
    int a{ getIntegerInput() };
    int b{ getIntegerInput() };
    std::cout << "You entered " << a << " and " << b << '\n';
    return 0;
}
