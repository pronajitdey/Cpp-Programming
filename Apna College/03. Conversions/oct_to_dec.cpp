#include <iostream>
using namespace std;

int OctalToDecimal(int n);

int main() {
  int oct;
  cin >> oct;

  cout << oct << " octal = " << OctalToDecimal(oct) << " decimal\n";

  return 0;
}

int OctalToDecimal(int n) {
  int ans = 0;
  int x = 1;
  while (n > 0) {
    int y = n % 10;
    ans += x * y;
    x *= 8;
    n /= 10;
  }

  return ans;
}