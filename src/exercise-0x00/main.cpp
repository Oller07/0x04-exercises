#include <iostream>

int find_max(int first, int second, int third);

int main() {

  std::cout << "Exercise 0x00" << std::endl;  
  
  int result = find_max(2, 4, 8);
  std::cout << result << std::endl;

  result = find_max(32, 16, 8);
  std::cout << result << std::endl;
  
  result = find_max(64, 128, 32);
  std::cout << result << std::endl;

  return 0;
}

int find_max(int first, int second, int third) {
  int result = first;
  if (second > result) {
    result = second;
  }
  if (third > result) {
    result = third;
  }
  return result;
}