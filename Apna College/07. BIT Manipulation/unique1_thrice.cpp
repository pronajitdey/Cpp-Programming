/* To find a unique no. in an array where all no.s except one,
are present thrice */

#include <iostream>
using namespace std;

int getBit(int n, int pos) {
  return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos) {
  return n | (1 << pos);
}

int unique(int arr[], int n) {
  int result = 0;
  for (int i = 0; i < 64; i++) {
    int count = 0;    // It counts the number of no.s having set bit at pos i
    for (int j = 0; j < n; j++) {
      if (getBit(arr[j], i)) {
        count++;
      }
    }

    if (count % 3 != 0) {
      result = setBit(result, i);
    }
  }

  return result;
}

int main() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "The unique number is " << unique(arr, n) << endl;

  return 0;
}