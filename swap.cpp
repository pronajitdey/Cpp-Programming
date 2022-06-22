#include <iostream>
using namespace std;

int main(void)
{
	int a, b;
	cout << "Enter 1st number : ";
	cin >> a;
	cout << "Enter 2nd number : ";
	cin >> b;

	cout << "Before swapping, Numbers are ::\n";
	cout << "\ta = " << a << ", b = " << b << "\n";

	a = a + b;
	b = a - b;
	a = a - b;

	cout << "After swapping, Numbers are ::\n";
	cout << "\ta = " << a << ", b = " << b << "\n";

	return 0;
}