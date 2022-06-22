#include <iostream>
using namespace std;

int main(void) {
  char c;
  cout << "Enter any character to check :: ";
  cin >> c;

  int isLowercaseVowel, isUppercaseVowel;
  isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
  isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

  if (isLowercaseVowel || isUppercaseVowel) {
    cout << "The Entered Character [ " << c << " ] is a Vowel.\n";
  } else {
    cout << "The Entered Character [ " << c << " ] is a Consonant.\n";
  }

  return 0;
}