#include <iostream>

int main()
{
	const int buf;  // Error
	int cnt = 0;
	const int sz = cnt;
	++cnt;
	++sz;  // Error
	return 0;
}