# include <iostream>

int getDoubleOf(int baseNum) {
    return baseNum * 2;
}

int main() {
    int userInput { };
    std::cout << "Enter a number: ";
    std::cin >> userInput;
    int result = getDoubleOf(userInput);
    std::cout << "Double of that number is: " << result << '\n';
    return 0;
}
