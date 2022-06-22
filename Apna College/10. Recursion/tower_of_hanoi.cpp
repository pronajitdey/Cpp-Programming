#include <iostream>
#include <string>
using namespace std;

void towerOfHanoi(int n, char src, char dest, char helper) {
  if (n == 0) {
    return;
  }

  towerOfHanoi(n - 1, src, helper, dest);
  cout << "Move from " << src << " to " << dest << endl;
  towerOfHanoi(n - 1, helper, dest, src);
}

int main() {
  int n;
  cout << "Enter number of disks :: ";
  cin >> n;

  char src, dest, helper;
  cout << "Enter source, destination, helper :: ";
  cin >> src >> dest >> helper;

  towerOfHanoi(n, src, dest, helper);
  return 0;
}