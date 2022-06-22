#include <iostream>
using namespace std;

int main() {
  int n, i, j;
  cout << "Enter a number: ";
  cin >> n;

  for (i = 1; i <= 3; i++) {
    for (j = 1; j <= n; j++) {
      if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0)) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << "\n";
  }

  return 0;
}
