#include <iostream>

int factorial(int n);

int main() {
  std::cout << "Exercise 0x01" << std::endl;
  std::cout << factorial(-2) << std::endl;
  std::cout << factorial(0) << std::endl;
  std::cout << factorial(4) << std::endl;  

  return 0;
}

int factorial(int n) {
  if(n < 0) {
    return -1;
  }
  int result = 1;
  for(int i = n; i > 0; i--){
    result *= i;
  }
  return result; 
}