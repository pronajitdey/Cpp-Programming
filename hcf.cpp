#include <iostream>
using namespace std;

int main(void) {
  int a, b;
  cout << "Enter 1st number : ";
  cin >> a;
  cout << "Enter 2nd number : ";
  cin >> b;

  int smaller;
  if (a < b) {
    smaller = a;
  } else {
    smaller = b;
  }

  int hcf;
  for (int i = 1; i <= smaller; i++){
    if (a % i == 0 && b % i == 0) {
      hcf = i;
    }
  }

  cout << "H.C.F of [ " << a << " ] and [ " << b << " ] is :: " << hcf << "\n";

  return 0;
}
