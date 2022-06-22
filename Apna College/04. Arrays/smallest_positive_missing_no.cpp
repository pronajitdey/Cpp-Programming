/* Amazon, Samsung, Snapdeal, Accolite
Find the smallest positive missing number in the given array. */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  const int N = 1e6;
  bool check[N];
  for (int i = 0; i < N; i++) {
    check[i] = false;
  }

  for (int i = 0; i < n; i++) {
    if (a[i] >= 0) {
      check[a[i]] = true;   // If positive, update its index to true
    }
  }

  int ans = -1;
  for (int i = 1; i < N; i++) {
    if (check[i] == false) {
      ans = i;
      break;
    }
  }

  cout << ans << "\n";

  return 0;
}
