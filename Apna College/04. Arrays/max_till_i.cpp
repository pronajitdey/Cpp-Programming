/* Given an array a[] of size n.
For every i from 0 to n-1 output max(a[0], a[1],..., a[i]). */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // mx stores the maximum till ith element
  int mx = INT_MIN;
  for (int i = 0; i < n; i++) {
    mx = max(mx, arr[i]);
    cout << mx << " ";
  }
  cout << "\n";

  return 0;
}