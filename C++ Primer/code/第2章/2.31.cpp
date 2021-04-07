#include <iostream>

int main()
{
	const int v2 = 0;
	int v1 = v2;
	int *p1 = &v1, &r1 = v1;
	int i;
	const int *p2 = &v2, *const p3 = &i, &r2 = v2;
	r1 = v2;  // Legal. r1 is not a const, v2 is a top-level const. r1 can be assigned by v2
	p1 = p2;  // Illegal. p1 is not a const, p2 is a low-level const. p1 can not be assigned by p2
	p2 = p1;  // Legal. p2 is a low-level const, p1 is not a const. p2 can be assigned by p1
	p1 = p3;  // Illegal. p1 is not a const, p3 is a both top-level and low-level const. p1 can be assigned by p3
	p2 = p3;  // Legal. p2 is a low-level const, p3 is a both top-level and low-level const. p2 can be assigned by p3
	return 0;
}