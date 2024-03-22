#include <iostream>

int main()
{
	int&& r = 10;
	int&& r1 = Add(3, 5);

	int x = 5;
	int&& r3 = x;
	int& ref = Transform(x);

	const int& r4 = 5;
	return 0;
}
