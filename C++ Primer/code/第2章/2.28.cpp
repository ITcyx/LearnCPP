#include <iostream>

int main()
{
	int i, *const cp;  // cp is an error
	int *p1, *const p2;  // p2 is an error
	const int ic, &r = ic;  // ic is an error
	const int *const p3;  // Error
	const int *p;
	return 0;
}