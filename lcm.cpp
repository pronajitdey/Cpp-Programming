#include <iostream>
using namespace std;

int main(void) {
  int a, b;
  cout << "Enter 1st number : ";
  cin >> a;
  cout << "Enter 2nd number : ";
  cin >> b;

  int larger;
  if (a > b) {
    larger = a;
  } else {
    larger = b;
  }

  int temp = larger;
  while (1) {
    if (larger % a == 0 && larger % b == 0) {
      cout << "L.C.M of [ " << a << " ] and [ " << b << " ] is :: " << larger << "\n";
      break;
    }

    larger += temp;
  }

  return 0;
}