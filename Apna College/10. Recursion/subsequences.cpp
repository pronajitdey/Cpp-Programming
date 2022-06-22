#include <iostream>
#include <string>
using namespace std;

void subseq(string s, string ans = "") {
  if (s.length() == 0) {
    cout << ans << endl;
    return;
  }

  char ch = s[0];
  string rest_str = s.substr(1);

  subseq(rest_str, ans);
  subseq(rest_str, ans + ch);
}

int main() {
  string str;
  cout << "Enter a string :: ";
  cin >> str;

  subseq(str);
  return 0;
}