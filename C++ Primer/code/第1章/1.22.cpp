#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item book, item;
	std::cin >> book;
	while (std::cin >> item)
		book += item;
	std::cout << book << std::endl;
	return 0;
}