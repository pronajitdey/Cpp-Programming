// To find the number of numbers in the interval [1,n] which are divisible by a or b

#include <iostream>
using namespace std;

int divisble(int n, int a, int b) {
  int n1 = n / a;
  int n2 = n / b;
  int n3 = n / (a * b);

  return n1 + n2 - n3;
}

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  cout << divisble(n, a, b) << endl;

  return 0;
}