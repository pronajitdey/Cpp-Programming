#include <iostream>
using namespace std;

int main() {
  int n1, n2, n3;
  cin >> n1 >> n2 >> n3;

  int mat1[n1][n2], mat2[n2][n3];

  // Input for matrix 1
  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < n2; j++) {
      cin >> mat1[i][j];
    }
  }

  // Input for matrix 2
  for (int i = 0; i < n2; i++) {
    for (int j = 0; j < n3; j++) {
      cin >> mat2[i][j];
    }
  }

  int mat3[n1][n3];

  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < n3; j++) {
      mat3[i][j] = 0;
    }
  }

  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < n3; j++) {
      for (int k = 0; k < n2; k++) {
        mat3[i][j] += mat1[i][k] * mat2[k][j];
      }
    }
  }

  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < n3; j++) {
      cout << mat3[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}