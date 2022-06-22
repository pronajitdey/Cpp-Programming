#include <iostream>
#include <climits>
using namespace std;

void SelectionSort(int arr[], int n);

int main() {
  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  SelectionSort(arr, n);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";

  return 0;
}

void SelectionSort(int arr[], int n) {
  int i, j;

  for (i = 0; i < n - 1; i++) {
    int min_int = arr[i], min_index = i;
    
    for (j = i + 1; j < n; j++) {
      if (arr[j] < arr[i] && arr[j] < min_int) {
        min_int = arr[j];
        min_index = j;
      }
    }
    arr[min_index] = arr[i];
    arr[i] = min_int;
  }
}