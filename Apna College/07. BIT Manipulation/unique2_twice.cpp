/* To find two unique no.s in an array where all no.s except two,
are present twice */

#include <iostream>
using namespace std;

int getBit(int n, int pos) {
  return ((n & (1 << pos)) != 0);
}

void unique(int arr[], int n) {
  int xorsum = 0; 
  for (int i = 0; i < n; i++) {
    xorsum = xorsum ^ arr[i];
  }
  
  int tempxor = xorsum;
  int setbit = 0;
  int pos = 0;    // pos stores at what position we have set bit
  while (setbit != 1) {
    setbit = tempxor & 1;
    pos++;
    tempxor = tempxor >> 1;
  }

  int newxor = 0;
  for (int i = 0; i < n; i++) {
    if (getBit(arr[i], pos - 1)) {
      newxor = newxor ^ arr[i];
    }
  }

  cout << "The unique numbers are " << newxor
       << " and " << (xorsum ^ newxor) << endl;
}


int main() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  unique(arr, n);

  return 0;
}