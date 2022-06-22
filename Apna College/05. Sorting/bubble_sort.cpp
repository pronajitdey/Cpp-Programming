#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n);

int main() {
  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  BubbleSort(arr, n);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";

  return 0;
}

void BubbleSort(int arr[], int n) {
  int i, j, counter = 0;

  while(counter < n - 1) {
    for (i = 0; i < n - counter - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        int temp = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = temp;
      }
    }
    counter++;
  }
}