/* Given an integer n, return true if it is a power of four.
Otherwise, return false. An integer n is a power of four,
if there exists an integer x such that n == 4x. */

#include <iostream>
using namespace std;

bool isPowerOf4(int n) {
  if (n == 1 || n == 4) {
    return true;
  }
  if (n % 4 != 0 || n == 0) {
    return false;
  }
  return isPowerOf4(n >> 2);
}

int main() {
  int n;
  cin >> n;

  if (isPowerOf4(n)) {
    cout << "The number is a power of 4\n";
  } else {
    cout << "The number is not a power of 4\n";
  }

  return 0;
}
