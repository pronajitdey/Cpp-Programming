#include <bits/stdc++.h>
using namespace std;

string AddBinary(int a, int b);
string reverse(string n);

int main() {
  int n1, n2;
  cin >> n1 >> n2;

  cout << "The sum is " << AddBinary(n1, n2) << "\n";

  return 0;
}

string AddBinary(int a, int b) {
  string ans = "";
  int prev_carry = 0;

  while (a > 0 && b > 0) {
    int last1 = a % 10;
    int last2 = b % 10;

    if (last1 == 0 && last2 == 0) {
      ans = ans + to_string(prev_carry);
      prev_carry = 0;

    } else if ((last1 == 0 && last2 == 1) || (last1 == 1 && last2 == 0)) {
      if (prev_carry == 1) {
        ans = ans + to_string(0);
        prev_carry = 1;
      } else {
        ans = ans + to_string(1);
        prev_carry = 0;
      }

    } else {
      ans = ans + to_string(prev_carry);
      prev_carry = 1;
    }

    a /= 10;
    b /= 10;
  }

  while (a > 0) {
    if (prev_carry == 1) {
      if (a % 2 == 1) {
        ans = ans + to_string(0);
        prev_carry = 1;

      } else {
        ans = ans + to_string(1);
        prev_carry = 0;
      }

    } else {
      ans = ans + to_string(a % 2);
    }
    a /= 10;
  }
  
  while (b > 0) {
    if (prev_carry == 1) {
      if (b % 2 == 1) {
        ans = ans + to_string(0);
        prev_carry = 1;

      } else {
        ans = ans + to_string(1);
        prev_carry = 0;
      }

    } else {
      ans = ans + to_string(b % 2);
    }
    b /= 10;
  }

  if (prev_carry == 1) {
    ans = ans + to_string(1);
  }

  ans = reverse(ans); 

  return ans;
}

string reverse(string n) {
  string rev = "";
  int len = n.size();

  for (int i = len - 1; i >= 0; i--) {
    char c = n[i];
    rev.push_back(c);
  }

  return rev;
}