#include <iostream>

int main()
{
	int i = 0, &r = i;
	auto  a = r;
	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	auto &g = ci;
	std::cout << r << "   ";
	a = 42;
	std::cout << r << std::endl;
	std::cout << ci << "   ";
	b = 42;
	std::cout << ci << std::endl;
	std::cout << cr << "   ";
	c = 42;
	std::cout << cr << std::endl;
	// d = 42;  // Error
	// e = 42;  // Error
	// g = 42;  // Error
	return 0;
}