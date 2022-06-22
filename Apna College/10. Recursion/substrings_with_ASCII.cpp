#include <iostream>
#include <string>
using namespace std;

void substr(string s, string ans = "") {
  if (s.length() == 0) {
    cout << ans << endl;
    return;
  }

  char ch = s[0];
  int code = ch;
  string rest_str = s.substr(1);

  substr(rest_str, ans);
  substr(rest_str, ans + ch);
  substr(rest_str, ans + to_string(code));
}

int main() {
  string str;
  cout << "Enter a string :: ";
  cin >> str;

  substr(str);

  return 0;
}