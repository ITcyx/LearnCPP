#include <iostream>

int main()
{
	int i = 42;
	void *p = &i;
	long *lp = &i;  // lp can only point to a long object
	return 0;
}