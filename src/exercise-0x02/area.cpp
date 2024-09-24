#include "area.h"
#include <cmath>

double area(double height, double width) {
  return height * width;
}

double area(double radius) { 
  return M_PI * pow(radius, 2);
}

double area(double a, double b, double c) {
  if (!(a + b > c) || !(a + c > b) ||! (b + c > a)) {
    return -1;
  }
  double s = (a + b + c) / 2;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}