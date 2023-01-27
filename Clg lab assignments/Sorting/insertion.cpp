#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j > 0; j--) {
      if (arr[j] < arr[j - 1]) {
        arr[j] = arr[j] + arr[j - 1] - (arr[j - 1] = arr[j]);
      } else {
        break;
      }
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
  insertionSort(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}