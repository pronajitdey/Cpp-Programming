#include <iostream>
using namespace std;

int max(int a, int b, int c);
bool check(int a, int b, int c);

int main() {
  int a, b, c;
  cout << "Enter three integers:\n";
  cin >> a >> b >> c;

  if (check(a, b, c)) {
    cout << "The numbers are Pythagorian triplet\n";
  } else {
    cout << "The numbers are not Pythagorian triplet\n";
  }

  return 0;
}

int max(int a, int b, int c) {
  if (a > b) {
    if (a > c) {
      return a;
    } else {
      return c;
    }

  } else {
    if (b > c) {
      return b;
    } else {
      return c;
    }
  }
}

bool check(int a, int b, int c) {
  int x = max(a, b, c);
  int y, z;

  if (x == a) {
    y = b;
    z = c;

  } else if (x == b) {
    y = a;
    z = c;

  } else {
    y = a;
    z = b;
  }

  if (x * x == y * y + z * z) {
    return true;
  } else {
    return false;
  }
}