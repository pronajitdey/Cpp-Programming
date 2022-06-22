#include <iostream>
using namespace std;

int main() {
  int n, i, j;
  cout << "Enter a number: ";
  cin >> n;

  for (i = 1; i <= n; i++) {
    // Print stars for first triangle
    for (j = 1; j <= i; j++) {
      cout << "* ";
    }

    // Print spaces
    for (j = 1; j <= 2 * n - (2 * i); j++) {
      cout << "  ";
    }

    // Print the remaining stars
    for (j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << "\n";
  }

  for (i = n; i >= 1; i--) {
    // Print stars for first triangle
    for (j = 1; j <= i; j++) {
      cout << "* ";
    }

    // Print spaces
    for (j = 1; j <= 2 * n - (2 * i); j++) {
      cout << "  ";
    }

    // Print the remaining stars
    for (j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << "\n";
  }

  return 0;
}