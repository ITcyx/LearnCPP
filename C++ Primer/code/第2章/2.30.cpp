#include <iostream>

int main()
{
	const int v2 = 0;  // Top-level const
	int v1 = v2;  //  v1 is not a const
	int i;
	int *p1 = &v1, &r1 = v1;  // p1 and r1 is not a const
	const int *p2 = &v2, *const p3 = &i, &r2 = v2;  // p2 is a low-level const. p3 is a both top-level and low-level const. r2 is a low-level const.
	return 0;
}