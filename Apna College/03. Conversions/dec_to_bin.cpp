#include <iostream>
using namespace std;

int DecimalToBinary(int n);

int main() {
  int dec;
  cin >> dec;

  cout << dec << " decimal = " << DecimalToBinary(dec) << " binary\n";

  return 0;
}

int DecimalToBinary(int n) {
  int ans = 0;
  int x = 1;
  
  // Find the highest power of 2 from which the number is divisible
  while (x <= n) {
    x *= 2;
  }
  x /= 2;

  while (x > 0) {
    int lastdigit = n / x;
    n -= lastdigit * x;
    x /= 2;
    ans = ans * 10 + lastdigit;
  }

  return ans;
}