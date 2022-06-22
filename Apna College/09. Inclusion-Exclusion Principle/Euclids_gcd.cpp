// gcd(a, b) = gcd(b, a%b)

#include <iostream>
using namespace std;

int gcd(int a, int b) {
  if (b > a) {
    int temp = a;
    a = b;
    b = temp;
  }

  while (b != 0) {
    int rem = a % b;
    a = b;
    b = rem;
  }

  return a;
}

int main() {
  int a, b;
  cin >> a >> b;

  cout << gcd(a, b) << endl;

  return 0;
}
