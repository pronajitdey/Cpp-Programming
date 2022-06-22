/* Given a "2 X n" board and tiles of "2 X 1", count the number of ways to tile the given board using these tiles */
#include <iostream>
using namespace std;

int tilingWays(int n) {
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }

  /* If we put a tile vertically then board size reduces to n - 1, and if we put a tile horizontally then board size reduces to n - 2 because 2 columns are occupied */
  return tilingWays(n - 1) + tilingWays(n - 2);
}

int main() {
  int n;
  cin >> n;

  cout << tilingWays(n) << endl;
  return 0;
}