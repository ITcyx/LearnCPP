#include <iostream>

int main()
{
	int ival = 1.01;
	int &rval1 = 1.01;  // ERROR
	int &rval2 = ival;
	int &rval3;  // ERROR
	return 0;
}