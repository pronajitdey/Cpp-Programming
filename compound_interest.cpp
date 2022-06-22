#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    float p, r, t, a;
    cout << "Enter Principle (Amount) :: ";
    cin >> p;
    cout << "Enter Rate of Interest :: ";
    cin >> r;
    cout << "Enter Time Period :: ";
    cin >> t;

    a = p * pow(1 + (r / 100), t);

    cout << "Amount = " << a << "\n";
    cout << "Total compounded interest = " << a - p << "\n";

    return 0;
}