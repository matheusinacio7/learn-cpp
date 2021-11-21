# include <iostream>

int getIntegerInput();

int main()
{
    int a{ getIntegerInput() };
    int b{ getIntegerInput() };
    std::cout << "You entered " << a << " and " << b << '\n';
    return 0;
}
