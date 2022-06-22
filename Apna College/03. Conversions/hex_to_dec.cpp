#include <iostream>
using namespace std;

int HexadecimalToDecimal(string s);

int main() {
  string hex;
  cin >> hex;

  cout << hex << " hexadecimal = " << HexadecimalToDecimal(hex) << " decimal\n";

  return 0;
}

int HexadecimalToDecimal(string s) {
  int ans = 0;
  int x = 1;

  // .size() finds the length of the string
  int len = s.size();
  for (int i = len - 1; i >= 0; i--) {
    if (s[i] >= '0' && s[i] <= '9') {
      ans += x * (s[i] - '0');

    } else if (s[i] >= 'A' && s[i] <= 'F') {
      ans += x * (s[i] - 'A' + 10);
    }

    x *= 16;
  }

  return ans;
}