#include <iostream>

int main()
{
	int num1, num2, val, max;
	std::cout << "Enter two numbers:" << std::endl;
	std::cin >> num1 >> num2;
	if (num1 < num2)
	{
		val = num1;
		max = num2;
	}
	else
	{
		val = num2;
		max = num1;
	}
	while (val <= max)
	{
		std::cout << val << std::endl;
		++val;
	}
	return 0;
}