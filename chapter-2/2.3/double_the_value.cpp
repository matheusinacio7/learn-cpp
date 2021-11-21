# include <iostream>

int getDoubleOf(int num) {
    return num * 2;
}

int main() {
    std::cout << "Double the number program\n";
    std::cout << "Enter an integer: ";
    int userInput { };
    std::cin >> userInput;
    std::cout << "The double of " << userInput << " is " << getDoubleOf(userInput) << '\n';
}
