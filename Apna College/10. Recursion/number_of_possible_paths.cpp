/* Count the number of paths possible from 
start point to end point in gameboard.

Steps are decided by a dice. */

#include <iostream>
using namespace std;

int countPath(int s, int e) {
  if (s == e) {
    return 1;
  } else if (s > e) {
    return 0;
  }

  int count = 0;
  // Check all possible steps of a dice
  for (int i = 1; i <= 6; i++) {
    count += countPath(s + i, e);
  }
  return count;
}

int main() {
  int start, end;
  cout << "Enter starting and ending position respectively :: ";
  cin >> start >> end;

  cout << countPath(start, end) << endl;
  return 0;
}