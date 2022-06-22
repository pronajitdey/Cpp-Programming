#include <iostream>
#include <string>
using namespace std;

string removeDup(string s) {
  if (s.length() == 0) {
    return "";
  }

  string ans = removeDup(s.substr(1));
  if (s[0] == ans[0]) {
    return ans;
  }
  return s[0] + ans;
}

int main() {
  string str;
  cout << "Enter a string :: ";
  cin >> str;

  cout << removeDup(str) << endl;
  return 0;
}