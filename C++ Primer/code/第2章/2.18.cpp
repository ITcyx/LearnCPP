#include <iostream>

int main()
{
	int ival = 1, jval = 2;
	int *pv;
	pv = &ival;
	pv = &jval;
	*pv = 3;
	return 0;
}