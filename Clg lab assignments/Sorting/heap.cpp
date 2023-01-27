#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
  int largest = i;
  int lChild = 2 * i + 1;
  int rChild = 2 * i + 2;

  if (lChild < n && arr[lChild] > arr[largest]) {
    largest = lChild;
  }
  if (rChild < n && arr[rChild] > arr[largest]) {
    largest = rChild;
  }

  if (largest != i) {
    arr[i] = arr[i] + arr[largest] - (arr[largest] = arr[i]);
    heapify(arr, n, largest);
  }
}

void heapSort(int arr[], int n) {
  for (int i = n / 2 - 1; i >= 0; i--) {
    heapify(arr, n, i);
  }

  for (int i = n - 1; i >= 0; i--) {
    arr[0] = arr[0] + arr[i] - (arr[i] = arr[0]);
    heapify(arr, i, 0);
  }
}


int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  
  heapSort(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}