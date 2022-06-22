/* Given a square matrix & its number of rows (or columns) N,
return the transpose of A */

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int arr[n][n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  int column_start = 0;
  for (int i = 0; i < n; i++) {
    for (int j = column_start; j < n; j++) {
      int temp = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = temp;
    }
    column_start++;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}