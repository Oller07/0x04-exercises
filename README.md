# dev-setup
Developer environment for SW1OPRG-01


# Exercise 0x00
Write a function `findMax` that takes three integers as input and returns the maximum among them.
Write a test that calls the `findMax` function and prints the result to the console.

# Exercise 0x01
Implement a function `calculateFactorial` that computes the factorial of a given non-negative integer.
Write a test that calls the `calculateFactorial` function and prints the result to the console.

# Exercise 0x02
Define overloaded functions to calculate the area of a rectangle, a circle, and a triangle.

Each function should have different parameters, here are some hints
- `width` and `height` for a rectangle
- The number pi is available in the `<cmath>` library as `M_PI`
- Check out Heron's formula for triangles

Write a test in `main` that calls each function and prints the result to the console.

# Exercise 0x03
Extract one (or more) function(s) from the code below, that makes the program more comprehensible.

```c++
int main(int argc, char** argv) {
  
  double v, r;

  std::cout << "This program calculates the power dissipated in a simple resistor circuit" << std::endl;
  std::cout << "Input the power source voltage [V]: " << std::endl;
  std::cin >> v;
  std::cout << "Input the resistance R [Ohm]: " << std::endl;
  std::cin >> r;

  double power = pow(v, 2) / r;

  std::cout << "The power dissipated in R is " << power << "watts [W]" << std::endl;
  
  return 0;
}
```

# Exercise 0x04
Create functions for 2x2 matrix addition, and multiplication.
Allow the user to input matrix data.
Allow the user to choose which operations to person on two matrices and prints the result to the console.
