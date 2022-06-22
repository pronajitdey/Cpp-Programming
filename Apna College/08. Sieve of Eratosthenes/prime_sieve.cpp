// Finding primes in Range [1,n] using Sieve of Erastothenes

#include <iostream>
using namespace std;

void primeSieve(int n) {
  int primes[n + 1] = {0};    // For containing no.s from 0 to n
  for (int i = 2; i <= n; i++) {
    if (primes[i] == 0) {
      for (int j = i * i; j <= n; j += i) {
        primes[j] = 1;
      }
    }
  }

  for (int i = 2; i <= n; i++) {
    if (primes[i] == 0) {
      cout << i << " ";
    }
  }
  cout << endl;
}

int main() {
  int n;
  cin >> n;

  primeSieve(n);

  return 0;
}