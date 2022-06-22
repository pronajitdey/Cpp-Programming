/* Find the count of every distinct element in the array, 
then calculate the position of each element in sorted array */
#include <iostream>
using namespace std;

void countSort(int arr[], int n) {
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  int count[max + 1] = {0};
  for (int i = 0; i < n; i++) {
    count[arr[i]]++;
  }

  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  int ans[n];
  for (int i = n - 1; i >= 0; i--) {
    ans[--count[arr[i]]] = arr[i];
  }

  for (int i = 0; i < n; i++) {
    arr[i] = ans[i];
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

  return 0;
}