#include <iostream>

int main()
{
	int i = 0;
	double* dp = &i;  // Error
	int *ip = i;  // Error
	int *p = &i;
	return 0;
}