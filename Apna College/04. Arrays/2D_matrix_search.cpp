#include <iostream>
using namespace std;

int main() {
  int n, m, target;
  cin >> n >> m >> target;

  int arr[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  bool found = false;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == target) {
        found = true;
      }
    }
  }

  if (found) {
    cout << "Found\n";
  } else {
    cout << "Not Found\n";
  }

  return 0;
}