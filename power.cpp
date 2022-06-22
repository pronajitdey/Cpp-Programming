#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int X, N;
	cout << "Enter value of X :: ";
	cin >> X;
	cout << "Enter value of N :: ";
	cin >> N;

	cout << "The Power of Number [ " << X << " ^ " << N << " ] = " << pow(X, N) << "\n";

	return 0;
}