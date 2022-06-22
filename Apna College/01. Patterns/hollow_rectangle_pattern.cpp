#include <iostream>
using namespace std;

int main(void) {
  int rows, columns;
  cout << "Enter number of rows: ";
  cin >> rows;
  cout << "Enter number of columns: ";
  cin >> columns;

  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= columns; j++) {
      if (i == 1 || i == rows || j == 1 or j == columns) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << "\n";
  }

  return 0;
}