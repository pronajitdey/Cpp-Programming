#include <iostream>
using namespace std;

void countSort(int arr[], int n) {
  int range = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > range) {
      range = arr[i];
    }
  }

  int count[range + 1];
  for (int i = 0; i <= range; i++) {
    count[i] = 0;
  }
  
  for (int i = 0; i < n; i++) {
    count[arr[i]]++;
  }

  for (int i = 1; i <= range; i++) {
    count[i] += count[i - 1];
  }

  int output[n];
  for (int i = 0; i < n; i++) {
    output[count[arr[i]] - 1] = arr[i];
    count[arr[i]]--;
  }

  for (int i = 0; i < n; i++) {
    arr[i] = output[i];
  }
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  
  countSort(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}