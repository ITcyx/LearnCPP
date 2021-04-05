#include <iostream>

int main()
{
	int val = 1;
	int *p;
	if (*p)  // Use *p to test whether p is pointing to a legal int object. If p is pointing to a illegal int object, the compiler will report an error
		std::cout << "p is pointing to a legal int object!" << std::endl;
	else
		std::cout << "p is pointing to a legal int object!" << std::endl;
	return 0;
}