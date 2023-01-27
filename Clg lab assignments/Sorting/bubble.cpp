#include <iostream>
using namespace std;

void swap(int arr[], int i, int j) {
  arr[i] = arr[i] + arr[j] - (arr[j] = arr[i]);
}

void bubbleSort(int arr[], int n) {
  bool swapped;
  for (int i = 0; i < n - 1; i++) {
    swapped = false;
    for (int j = 1; j < n - i; j++) {
      if (arr[j] < arr[j - 1]) {
        swap(arr, j, j - 1);
        swapped = true;
      }
    }
    if (!swapped) {
      break;
    }
  }
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  bubbleSort(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}