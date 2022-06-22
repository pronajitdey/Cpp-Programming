#include <iostream>
using namespace std;

int main(void) {
  int n;
  cout << "How many terms u want to Display :: ";
  cin >> n;
  cout << "The Fibonacci series for [ " << n << " ] terms are ::\n";

  int first = 0, second = 1, next;
  
  for (int i = 0; i < n; i++) {
    cout << first << "\t";
    next = first + second;
    first = second;
    second = next;
  }

  cout << "\n";

  return 0;
}