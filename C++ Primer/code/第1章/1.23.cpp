#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item total, trans;
	int i = 0;
	if (std::cin >> total)
	{
		++i;
		while (std::cin >> trans)
		{
			if (total.isbn() == trans.isbn())
				++i;
			else
			{
				std::cout << total.isbn() << " " << i << std::endl;
				i = 1;
				total = trans;
			}
		}
		std::cout << total.isbn() << " " << i << std::endl;
	}
	return 0;
}