#include <iostream>

int main()
{
	int i, *p1, *const p2 = &i;
	const int ic = 1, *const p3 = &ic;
	i = ic;
	p1 = p3;  // Error
	p1 = &ic;  // Error
	p3 = &ic;  // Error
	p2 = p1;  // Error
	ic = *p3;  // Error
	return 0;
}