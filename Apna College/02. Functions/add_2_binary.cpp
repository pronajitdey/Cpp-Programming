#include <iostream>
using namespace std;

int AddBinary(int a, int b);
int reverse(int n);

int main() {
  int n1, n2;
  cin >> n1 >> n2;

  cout << "The sum is " << AddBinary(n1, n2) << "\n";

  return 0;
}

int AddBinary(int a, int b) {
  int ans = 0;
  int prev_carry = 0;

  while (a > 0 && b > 0) {
    int last1 = a % 10;
    int last2 = b % 10;

    if (last1 == 0 && last2 == 0) {
      ans = ans * 10 + prev_carry;
      prev_carry = 0;

    } else if ((last1 == 0 && last2 == 1) || (last1 == 1 && last2 == 0)) {
      if (prev_carry == 1) {
        ans = ans * 10;
        prev_carry = 1;
      } else {
        ans = ans * 10 + 1;
        prev_carry = 0;
      }

    } else {
      ans = ans * 10 + prev_carry;
      prev_carry = 1;
    }

    a /= 10;
    b /= 10;
  }

  while (a > 0) {
    if (prev_carry == 1) {
      if (a % 2 == 1) {
        ans = ans * 10;
        prev_carry = 1;

      } else {
        ans = ans * 10 + 1;
        prev_carry = 0;
      }

    } else {
      ans = ans * 10 + (a % 2);
    }
    a /= 10;
  }
  
  while (b > 0) {
    if (prev_carry == 1) {
      if (b % 2 == 1) {
        ans = ans * 10;
        prev_carry = 1;

      } else {
        ans = ans * 10 + 1;
        prev_carry = 0;
      }

    } else {
      ans = ans * 10 + (b % 2);
    }
    b /= 10;
  }

  if (prev_carry == 1) {
    ans = ans * 10 + 1;
  }

  ans = reverse(ans); 

  return ans;
}

int reverse(int n) {
  int rev = 0;

  while (n > 0) {
    int lastdigit = n % 10;
    rev = rev * 10 + lastdigit;
    n /= 10;
  }

  return rev;
}