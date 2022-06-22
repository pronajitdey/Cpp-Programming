// Delete consecutive repeating characters

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string s;
  cin >> s;

  string ans;
  ans[0] = s[0];

  for (int i = 0; i < s.length(); i++) {
    if (s[i] != s[i -1]) {
      ans = ans + s[i];
    }
  }

  cout << ans << endl;

  return 0;
}