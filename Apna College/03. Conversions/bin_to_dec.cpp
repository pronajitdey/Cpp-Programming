#include <iostream>
using namespace std;

int BinaryToDecimal(int n);

int main() {
  int bin;
  cin >> bin;

  cout << bin << " binary = " << BinaryToDecimal(bin) << " decimal\n";

  return 0;
}

int BinaryToDecimal(int n) {
  int ans = 0;
  int x = 1;
  while (n > 0) {
    int y = n % 10;
    ans += x * y;
    x *= 2;
    n /= 10;
  }

  return ans;
}