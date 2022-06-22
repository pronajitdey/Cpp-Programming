#include <iostream>
using namespace std;

int main(void) {
  int year;
  cout << "Enter any Year (XXXX) :: ";
  cin >> year;

  if (year % 100 == 0 && year % 400 == 0) {
    cout << "The Entered Year [ " << year << " ] is a Leap Year.\n";
  } else if (year % 4 == 0 && year % 100 != 0) {
    cout << "The Entered Year [ " << year << " ] is a Leap Year.\n";
  } else {
    cout << "The Entered Year [ " << year << " ] is NOT a Leap Year.\n";
  }

  return 0;
}