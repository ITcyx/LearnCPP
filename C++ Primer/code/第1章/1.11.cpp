#include <iostream>

int main()
{
	int num1, num2, val;
	std::cout << "Enter two numbers:" << std::endl;
	std::cin >> num1 >> num2;
	val = num1;
	while (val <= num2)
	{
		std::cout << val << std::endl;
		++val;
	}
	return 0;
}