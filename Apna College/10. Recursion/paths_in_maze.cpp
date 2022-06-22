/* Count the number of paths possible in a maze of n X n.
Move from start(i, j) to end(n-1, n-1) either in rightward or 
downward direction */
#include <iostream>
using namespace std;

int countPathMaze(int n, int i, int j) {
  if (i == n - 1 && j == n - 1) {
    return 1;
  }
  if (i >= n || j >= n) {
    return 0;
  }

  return countPathMaze(n, i + 1, j) + countPathMaze(n, i, j + 1);
}

int main() {
  int i, j, n;
  cout << "Enter starting point :: ";
  cin >> i >> j;
  cout << "Enter ending point :: ";
  cin >> n;

  cout << countPathMaze(n, i, j) << endl;
  return 0;
}