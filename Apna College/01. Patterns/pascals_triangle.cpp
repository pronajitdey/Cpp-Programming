#include <iostream>
using namespace std;

int main() {
  int n, i, j, coeff;
  cout << "Enter a number: ";
  cin >> n;

  int space = n - 1;
  for (i = 1; i <= n; i++) {
    coeff = 1;

    for (j = 1; j <= space; j++) {
      cout << "  ";
    }

    for (j = 1; j <= i; j++) {
      cout << coeff << "   ";
      coeff = coeff * (i - j) / j;
    }
    cout << "\n";
    space--;
  }

  return 0;
}