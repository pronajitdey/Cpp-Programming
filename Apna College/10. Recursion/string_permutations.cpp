// Print all permutations of a string
#include <iostream>
#include <string>
using namespace std;

void permutation(string s, string ans = "") {
  if (s.length() == 0) {
    cout << ans << endl;
  }

  // Fix each character and permute the rest of the string
  for (int i = 0; i < s.length(); i++) {
    char fixed = s[i];
    string rest_str = s.substr(0, i) + s.substr(i + 1, s.length());
    permutation(rest_str, ans + fixed);
  }
}

int main() {
  string str;
  cout << "Enter the string :: ";
  cin >> str;

  permutation(str);
  return 0;
}