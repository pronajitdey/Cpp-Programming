#include <iostream>
using namespace std;

void max(int a, int b, int c);
void min(int a, int b, int c);

int main() {
  int a, b, c;
  cout << "Enter three integers:\n";
  cin >> a >> b >> c;

  max(a, b, c);
  min(a, b, c);

  return 0;
}

void max(int a, int b, int c) {
  if (a > b) {
    if (a > c) {
      cout << a << " is maximum\n";
    } else {
      cout << c << " is maximum\n";
    }

  } else {
    if (b > c) {
      cout << b << " is maximum\n";
    } else {
      cout << c << " is maximum\n";
    }
  }
}

void min(int a, int b, int c) {
  if (a < b) {
    if (a < c) {
      cout << a << " is minimum\n";
    } else {
      cout << c << " is minimum\n";
    }

  } else {
    if (b < c) {
      cout << b << " is minimum\n";
    } else {
      cout << c << " is minimum\n";
    }
  }
}