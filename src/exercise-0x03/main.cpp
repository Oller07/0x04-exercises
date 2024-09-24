#include <cmath>
#include <iostream>
#include <string>

void prompt(std::string text, double* out);
double power_dissipated(double voltage, double resistance);

int main() {
  std::cout << "Exercise 0x03" << std::endl;
  
  double v, r;

  std::cout << "This program calculates the power dissipated in a simple resistor circuit" << std::endl;
  prompt("Input the power source voltage [V]: ", &v);
  prompt("Input the resistance R [Ohm]: ", &r);
  std::cout << "The power dissipated in R is " << power_dissipated(v, r) << " watts [W]" << std::endl;
  
  return 0;
}

void prompt(std::string text, double* out) {
  std::cout << text;
  std::cin >> *out;
}

double power_dissipated(double voltage, double resistance) {
  return pow(voltage, 2) / resistance;
}