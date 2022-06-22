#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
  if (n == 1) {
    return true;
  }

  bool restArray = isSorted(arr + 1, n - 1);
  return (arr[0] < arr[1] && restArray);
}

int main() {
  int n;
  cout << "Size of array :: ";
  cin >> n;

  int arr[n];
  cout << "Enter the elements - " << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << isSorted(arr, n) << endl;
  return 0;
}