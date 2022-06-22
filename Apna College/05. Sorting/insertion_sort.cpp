#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n);

int main() {
  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  InsertionSort(arr, n);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";

  return 0;
}

void InsertionSort(int arr[], int n) {
  int i, j, current;

  for (i = 1; i < n - 1; i++) {
    current = arr[i];
    j = i - 1;
    
    while (arr[j] > current && j >= 0) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = current;
  }
}