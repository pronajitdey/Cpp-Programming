#include <iostream>
using namespace std;

int main() {
  int n, i, j;
  cout << "Enter a number: ";
  cin >> n;

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      if (j > n - i) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    for (j = 2; j <= i; j++) {
      cout << "* ";
    }
    cout << "\n";
  }

  for (i = n; i >= 1; i--) {
    for (j = 1; j <= n; j++) {
      if (j > n - i) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    for (j = 2; j <= i; j++) {
      cout << "* ";
    }
    cout << "\n";
  }  

  return 0;
}