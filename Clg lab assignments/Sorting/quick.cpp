#include <iostream>
using namespace std;

void quickSort(int arr[], int low, int high) {
  if (low >= high) return;

  int s = low;
  int e = high;
  int m = s + (e - s) / 2;
  int pivot = arr[m];

  while (s <= e) {
    while (arr[s] < pivot) {
      s++;
    }
    while (arr[e] > pivot) {
      e--;
    }
    if (s <= e) {
      arr[s] = arr[s] + arr[e] - (arr[e] = arr[s]);
      s++;
      e--;
    }
  }

  quickSort(arr, low, e);
  quickSort(arr, s, high);
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  
  quickSort(arr, 0, n - 1);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}