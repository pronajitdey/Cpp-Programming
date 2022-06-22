/* We have to print the given 2D matrix in the spiral order.
Spiral order means that firstly, first row is printed, then last column is
printed, then last row is printed and then first column is printed, then 
we will come inwards in the similar way */

#include <iostream>
using namespace std;

int main() {
  int m, n;
  cin >> m >> n;

  int arr[m][n];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  int row_start = 0, column_start = 0;
  int row_end = m - 1, column_end = n - 1;

  while (row_start <= row_end && column_start <= column_end) {
    // For row start
    for (int col = column_start; col <= column_end; col++) {
      cout << arr[row_start][col] << " ";
    }
    row_start++;

    // For column end
    for (int row = row_start; row <= row_end; row++) {
      cout << arr[row][column_end] << " ";
    }
    column_end--;

    // For row end
    for (int col = column_end; col >= column_start; col--) {
      cout << arr[row_end][col] << " ";
    }
    row_end--;

    // For column start
    for (int row = row_end; row >= row_start; row--) {
      cout << arr[row][column_start] << " ";
    }
    column_start++;
  }

  return 0;
}