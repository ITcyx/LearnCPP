#include <iostream>

int main()
{
	int a;
	decltype(a) a1;  // a1 is a int
	auto a2 = a;  // a2 is a int
	int& b = a;
	decltype(b) b1 = a;  // b1 is a int reference
	auto b2 = a;  // b2 is a int
	return 0;
}