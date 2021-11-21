#include <iostream>

int getIntegerInput()
{
    std::cout << "Enter an integer: ";
    int input { };
    std::cin >> input;
    return input;
}

int printAnswer(int answer)
{
    std::cout << "The result is: " << answer << '\n';
}

int main()
{
    std::cout << "Basic adding calculator \n";
    int a { getIntegerInput() };
    int b { getIntegerInput() };
    printAnswer(a + b);
}
