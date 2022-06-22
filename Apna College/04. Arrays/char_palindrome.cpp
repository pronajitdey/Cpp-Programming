// Check if a given charactyer array is a palindrome or not
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  char arr[n];
  cin >> arr;

  bool check = 1;
  for (int i = 0; i < n; i++) {
    if (arr[i] != arr[n - 1 - i]) {
      check = 0;
      break;
    }
  }

  if (check) {
    cout << arr << " is a palindrome\n";
  } else {
    cout << arr << " is not a palindrome\n";
  }

  return 0;
}