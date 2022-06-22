// Move all 'x' to the end of the string
#include <iostream>
#include <string>
using namespace std;

string moveAllx(string s) {
  if (s.length() == 0) {
    return "";
  }

  string ans = moveAllx(s.substr(1));
  if (s[0] == 'x') {
    return ans + s[0];
  }
  return s[0] + ans;
}

int main() {
  string str;
  cout << "Enter a string :: ";
  cin >> str;

  cout << moveAllx(str) << endl;
  return 0;
}