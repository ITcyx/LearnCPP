#include <iostream>

int main()
{
	int val = 1;
	int *p = &val;
	if (p)
		std::cout << "p is not a nullptr!" << std::endl;
	if (*p)
		std::cout << "The int object which is p point to is not 0!" << std::endl;
	return 0;
}