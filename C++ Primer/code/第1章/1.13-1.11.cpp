#include <iostream>

int main()
{
	int num1, num2;
	std::cout << "Enter two numbers:" << std::endl;
	std::cin >> num1 >> num2;
	for (int val = num1; val <= num2; ++val)
		std::cout << val << std::endl;
	return 0;
}