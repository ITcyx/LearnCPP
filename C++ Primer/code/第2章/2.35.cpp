#include <iostream>

int main()
{
	const int i = 42;
	auto j = i;  // j is a int
	const auto &k = i;  // k is a const int reference
	auto *p = &i;  // p is a pointer whitch is point to const int
	const auto j2 = i, &k2 = i;  // j2 is a const int, k2 is a const int reference
	return 0;
}