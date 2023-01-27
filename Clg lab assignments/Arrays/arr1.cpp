#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int size = n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "Enter choice: 1->update, 2->insert, 3->search, 4->remove, 5->display, 0->exit\n";
  int choice;
  do {
    cin >> choice;
    int x, k;
    int found = 0;
    switch (choice) {
      case 1:
        cout << "Enter element and position: ";
        cin >> x >> k;
        if (k >= n) {
          cout << "Index out of bound\n";
          break;
        }
        arr[k] = x;
        break;

      case 2:
        cout << "Enter element and position: ";
        cin >> x >> k;
        if (k >= n) {
          cout << "Index out of bound\n";
          break;
        }
        for (int i = n - 1; i > k; i--) {
          arr[i] = arr[i - 1];
        }
        arr[k] = x;
        size = size + 1 > n ? n : size + 1;
        break;

      case 3:
        cout << "Enter element to be searched: ";
        cin >> x;
        for (int i = 0; i < size; i++) {
          if (arr[i] == x) {
            found = 1;
            cout << "Element " << x << " found at index " << i << endl;
            break;
          }
        }
        if (found == 0) {
          cout << "Element " << x << " not found in array\n";
        }
        break;

      case 4:
        cout << "Enter element to be removed: ";
        cin >> x;
        for (int i = 0; i < size; i++) {
          if (arr[i] == x) {
            found = 1;
            for (int j = i; j < size - 1; j++) {
              arr[j] = arr[j + 1];
            }
            size = size - 1 < 0 ? 0 : size - 1;
            break;
          }
        }
        if (found == 0)
          cout << "Element not found\n";
        break;

      case 5:
        for (int i = 0; i < size; i++) {
          cout << arr[i] << " ";
        }
        cout << endl;
        break;

      default:
        cout << "Invalid choice\n";
    }
  } while (choice != 0);

  return 0;
}