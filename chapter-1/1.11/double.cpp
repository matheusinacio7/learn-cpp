# include <iostream>

int getDoubleOf(int baseNum) {
    return baseNum * 2;
}

int main() {
    int userInput { };
    std::cout << "Enter a number: ";
    std::cin >> userInput;
    std::cout << "Double of that number is: " << getDoubleOf(userInput) << '\n';
    return 0;
}
