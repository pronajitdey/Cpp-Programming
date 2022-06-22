#include <iostream>
#include <time.h>
using namespace std;

int main(void)
{
	int num;
	srand(time(NULL));		// srand() generates different numbers during each execution
	cout << "Generation Random Numbers Below ::\n";
	for (int i = 0; i < 10; i++)
	{
		num = rand() % 100;
		cout << num << "\t";
	}

	return 0;
}