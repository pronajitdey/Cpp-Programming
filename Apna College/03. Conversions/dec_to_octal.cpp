#include <iostream>
using namespace std;

int DecimalToOctal(int n);

int main() {
  int dec;
  cin >> dec;

  cout << dec << " decimal = " << DecimalToOctal(dec) << " octal\n";

  return 0;
}

int DecimalToOctal(int n) {
  int ans = 0;
  int x = 1;
  
  // Find the highest power of 8 from which the number is divisible
  while (x <= n) {
    x *= 8;
  }
  x /= 8;

  while (x > 0) {
    int lastdigit = n / x;
    n -= lastdigit * x;
    x /= 8;
    ans = ans * 10 + lastdigit;
  }

  return ans;
}