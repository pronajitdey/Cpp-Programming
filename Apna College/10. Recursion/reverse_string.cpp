#include <iostream>
#include <string>
using namespace std;

void reverse(string s) {
  if (s.length() == 0) {
    return;
  }

  string rest_str = s.substr(1);
  reverse(rest_str);
  cout << s[0];
}

int main() {
  string str;
  cin >> str;

  reverse(str);
  return 0;
}