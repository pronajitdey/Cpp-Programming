#include <iostream>
using namespace std;

int main() {
  int n, i, j;
  cout << "Enter a number: ";
  cin >> n;

  int space = n - 1;
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= space; j++) {
      cout << "* ";
    }
    for (j = 1; j <= 2 * i - 1; j++) {
      if (j == 1 || j == 2 * i - 1) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    for (j = 1; j <= space; j++) {
      cout << "* ";
    }
    cout << "\n";
    space--;
  }

  space = 0;
  for (i = n; i >= 1; i--) {
    for (j = 1; j <= space; j++) {
      cout << "* ";
    }
    for (j = 1; j <= 2 * i - 1; j++) {
      if (j == 1 || j == 2 * i - 1) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    for (j = 1; j <= space; j++) {
      cout << "* ";
    }
    cout << "\n";
    space++;
  }

  return 0;
}