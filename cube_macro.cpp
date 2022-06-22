#include <iostream>
using namespace std;

#define CUBE(x) (x * x * x)

int main(void) {
  int n;
  cout << "Enter any positive number :: ";
  cin >> n;
  cout << "The Cube of Entered Number [ " << n << " ] is :: [ " << CUBE(n) << " ]\n";

  return 0;
}