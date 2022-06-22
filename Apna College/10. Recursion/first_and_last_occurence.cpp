/* To find the first occurrence, we return as soon as we find the element.
To find the last occurrence, we return the result we get from further 
function calls */

#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int idx, int key) {
  if (idx == size) {
    return -1;
  }
  if (arr[idx] == key) {
    return idx;
  }

  return firstOcc(arr, size, idx + 1, key);
}

int lastOcc(int arr[], int size, int idx, int key) {
  if (idx == size) {
    return -1;
  }

  int restArray = lastOcc(arr, size, idx + 1, key);
  if (restArray != -1) {
    return restArray;
  }
  if (arr[idx] == key) {
    return idx;
  }
  return -1;
}

int main() {
  int size;
  cout << "Size of array :: ";
  cin >> size;

  int arr[size];
  cout << "Enter elements ::" << "\n";
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  int key;
  cout << "Enter key :: ";
  cin >> key;

  int idx = 0;
  cout << firstOcc(arr, size, idx, key) << endl;
  cout << lastOcc(arr, size, idx, key) << endl;
  return 0;
}