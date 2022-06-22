#include <iostream>
#include <cctype>

using namespace std;

int main(void) {
  char c;
  cout << "Enter any character to check :: ";
  cin >> c;

  if (isupper(c)) {
    cout << "The Entered Character [ " << c << " ] is an UPPERCASE character.\n";
  } else if (islower(c)) {
    cout << "The Entered Character [ " << c << " ] is an LOWERCASE character.\n";
  } else if (isdigit(c)) {
    cout << "The Entered Character [ " << c << " ] is a DIGIT.\n";
  } else {
    cout << "The Entered Character [ " << c << " ] is a SPECIAL character.\n";
  }

  return 0;
}