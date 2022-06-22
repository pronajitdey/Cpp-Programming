#include <iostream>
using namespace std;

int main() {
  int n, i, j;
  cout << "Enter a number: ";
  cin >> n;

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      if (j == 1 || j == i) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    for (j = 1; j <= 2 * n - 2 * i; j++) {
      cout << "  ";
    }
    for (j = 1; j <= i; j++) {
      if (j == 1 || j == i) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << "\n";
  }

  for (i = n; i >= 1; i--) {
    for (j = 1; j <= i; j++) {
      if (j == 1 || j == i) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    for (j = 1; j <= 2 * n - 2 * i; j++) {
      cout << "  ";
    }
    for (j = 1; j <= i; j++) {
      if (j == 1 || j == i) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << "\n";
  }

  return 0;
}