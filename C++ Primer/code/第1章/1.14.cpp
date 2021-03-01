#include <iostream>

int main()
{
	int val = 0;
	while (val <= 10)
	{
		std::cout << val << std::endl;
		++val;
	}
	for (val = 0; val <= 10; ++val)
		std::cout << val << std::endl;
	return 0;
}