#include <iostream>
using namespace std;

void swap(int arr[], int i, int j) {
  arr[i] = arr[i] + arr[j] - (arr[j] = arr[i]);
}

int getMaxIdx(int arr[], int start, int end) {
  int maxIdx = start;
  for (int i = start; i <= end; i++) {
    if (arr[i] > arr[maxIdx]) {
      maxIdx = i;
    }
  }
  return maxIdx;
}

void selectionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int last = n - 1 - i;
    int maxIdx = getMaxIdx(arr, 0, last);
    swap(arr, maxIdx, last);
  }
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  selectionSort(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}