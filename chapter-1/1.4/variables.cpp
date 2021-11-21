# include <iostream>

int main() {
  int counter { 0 };
  std::cout << counter;
  std::cout << '\n';
  counter += 1;
  std::cout << counter;
  std::cout << '\n';
  std::cin >> counter;
  std::cout << counter;
  std::cout << '\n';
}
