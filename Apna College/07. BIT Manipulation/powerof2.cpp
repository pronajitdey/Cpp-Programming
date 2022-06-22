#include <iostream>
using namespace std;

bool isPowerOf2(int n) {
  return (n && !(n & (n - 1)));
}

int main() {
  int n;
  cin >> n;

  if (isPowerOf2(n)) {
    cout << "The number is a power of 2\n";
  } else {
    cout << "The number is not a power of 2\n";
  }

  return 0;
}