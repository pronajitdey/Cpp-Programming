#include <iostream>
using namespace std;

bool isalpha(char c);

int main() {
  char c;
  cout << "Enter a character: ";
  cin >> c;

  if (isalpha(c)) {
    cout << "The character is an alphabet\n";
  } else {
    cout << "The character is not an alphabet\n";
  }

  return 0;
}

bool isalpha(char c) {
  if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
    return true;
  } else {
    return false;
  }
}