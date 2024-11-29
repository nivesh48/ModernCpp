#include <iostream>

int main() {
  int my_var = 0;
  std::cout << "Give me a number" << std::endl;
  std::cin >> my_var;
  std::cerr << "Error !" << std::endl;
  return 0;
}