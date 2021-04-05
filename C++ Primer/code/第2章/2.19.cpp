#include <iostream>

int main()
{
	int ival = 1, jval = 2;
	int &val = ival;
	val = 2;
	std::cout << ival << std::endl;
	int *pv = &ival;
	*pv = 3;
	std::cout << ival << std::endl;
	pv = &jval;
	*pv = 4;
	std::cout << jval << std::endl;
	return 0;
}