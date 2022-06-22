// C++ program to find roots of Quadratic Equation

#include <iostream>
#include <cmath>

using namespace std;

int main(void) {

  float a, b, c, discriminant, real_part, imag_part, x1, x2;
  cout << "Enter coefficient a :: ";
  cin >> a;
  cout << "Enter coefficient b :: ";
  cin >> b;
  cout << "Enter coefficient c :: ";
  cin >> c;

  discriminant = pow(b, 2) - (4 * a * c);

  if (discriminant > 0) {
    x1 = (-b + sqrt(discriminant)) / (2 * a);
    x2 = (-b - sqrt(discriminant)) / (2 * a);
    cout << "Roots are real and different\n";
    cout << "x1 = " << x1 << "\n";
    cout << "x2 = " << x2 << "\n";

  } else if (discriminant == 0) {
    x1 = -b / (2 * a);
    cout << "Roots are real and same\n";
    cout << "x1 = x2 = " << x1 << "\n";

  } else {
    real_part = -b / (2 * a);
    imag_part = (sqrt(-discriminant)) / (2 * a);
    cout << "Roots are complex and different\n";
    cout << "x1 = " << real_part << " + " << imag_part << "i\n";
    cout << "x1 = " << real_part << " - " << imag_part << "i\n";
  
  }

  return 0;
}