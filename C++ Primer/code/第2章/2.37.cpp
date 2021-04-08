#include <iostream>

int main()
{
	int a = 3, b = 4;
	decltype(a) c = a;  // c is a int and it is equal to 3
	decltype(a = b) d = a;  // d is a int reference and it is equal to 3
	return 0;
}