#include <iostream>

int main() {
  
  double interest_rate = 8.5;
  double* double_pointer = &interest_rate;

  std::cout << "double_pointer: " << double_pointer << std::endl;
  std::cout << "double_pointer: " << *double_pointer << std::endl;

}