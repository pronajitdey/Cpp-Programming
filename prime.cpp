#include <iostream>
using namespace std;

int main(void) {
  int n;
  cout << "Enter any positive number :: ";
  cin >> n;

  for (int i = 2; i < n / 2; i++) {
    if (n % i == 0) {
      cout << "The Entered Number [ " << n << " ] is NOT a prime number.\n";
      return 0;
    }
  }

  cout << "The Entered Number [ " << n << " ] is a prime number.\n";

  return 0;
}