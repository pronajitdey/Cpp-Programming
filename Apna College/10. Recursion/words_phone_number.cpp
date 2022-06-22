// Print all possible words from phone digits
#include <iostream>
#include <string>
using namespace std;

string keypadArr[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", 
                      "tuv", "wxyz"};

void keypad(string s, string ans = "") {
  if (s.length() == 0) {
    cout << ans << endl;
    return;
  }

  char ch = s[0];
  string code = keypadArr[ch - '0'];
  string rest_str = s.substr(1);

  for (int i = 0; i < code.length(); i++) {
    keypad(rest_str, ans + code[i]);
  }
}

int main() {
  string digit;
  cout << "Enter the digits :: ";
  cin >> digit;

  keypad(digit);
  return 0;
}