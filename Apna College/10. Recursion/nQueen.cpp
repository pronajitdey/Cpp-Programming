/* Given an n X n size chess board and we need to place n-Queens, 
such that no two Queens attack each other */
#include <iostream>
using namespace std;

bool isSafe(int** arr, int x, int y, int n) {

  // Check if queen is present along the column
  for (int row = 0; row < x; row++) {
    if (arr[row][y] == 1) {
      return false;
    }
  }

  // Check if queen is present diagonally left up
  int row = x;
  int col = y;
  while (row >= 0 && col >= 0) {
    if (arr[row][col] == 1) {
      return false;
    }
    row--;
    col--;
  }

  // Check if queen is present diagonally right up
  row = x;
  col = y;
  while (row >= 0 && col < n) {
    if (arr[row][col] == 1) {
      return false;
    }
    row--;
    col++;
  }

  return true;
}

/* y is not required because as we place a queen in a row we move 
to the next row and don't check the further columns */
bool nQueen(int** arr, int x, int n) {
  if (x >= n) {
    return true;
  }

  for (int col = 0; col < n; col++) {
    if (isSafe(arr, x, col, n)) {
      arr[x][col] = 1;
      
      if (nQueen(arr, x + 1, n)) {
        return true;
      }

      arr[x][col] = 0;    // backtracking
    }
  }
  return false;
}

int main() {
  int n;
  cin >> n;

  int** arr = new int*[n];
  for (int i = 0; i < n; i++) {
    arr[i] = new int[n];
    for (int j = 0; j < n; j++) {
      arr[i][j] = 0;
    }
  }

  if (nQueen(arr, 0, n)) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cout << arr[i][j] << " ";
      }
      cout << endl;
    }
  }

  return 0;
}