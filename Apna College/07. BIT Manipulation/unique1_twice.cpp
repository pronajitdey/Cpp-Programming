/* To find a unique no. in an array where all no.s except one,
are present twice. */

#include <iostream>
using namespace std;

int unique(int arr[], int n) {
  int xorsum = 0;
  for (int i = 0; i < n; i++) {
    xorsum = xorsum ^ arr[i];
  }
  return xorsum;
}

int main() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "The unique no. is " << unique(arr, n) << endl;

  return 0;
}
