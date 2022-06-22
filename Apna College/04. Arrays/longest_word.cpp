// Longest word in a sentence
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  char arr[n];
  cin.ignore();  // clear the input buffer
  cin.getline(arr, n);  // getline() used to input complete sentence

  int curr_len = 0, max_len = 0;
  int max_st = 0, st = 0;  // st stores the index of starting of word
  int i = 0;
  while (i < n) {
    if (arr[i] == ' ' || arr[i] == '\0') {
      if (curr_len > max_len) {
        max_st = st;
        max_len = curr_len;
      }

      curr_len = 0;
      st = i + 1;

    } else {
      curr_len++;
    }

    if (arr[i] == '\0') {
      break;
    }
    i++;
  }

  cout << arr << "\n";
  cout << max_len << "\n";

  for (int i = 0; i < max_len; i++) {
    cout << arr[max_st + i];
  }
  cout << "\n";

  return 0;
}