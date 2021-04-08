#include <iostream>
#include "Sales_data.h"

int main()
{
	Sales_data total;
	double price;
	if (std::cin >> total.bookNo >> total.units_sold >> price)
	{
		total.revenue = price * total.units_sold;
		Sales_data trans;
		while (std::cin >> trans.bookNo >> trans.units_sold >> price)
		{
			trans.revenue = price * trans.units_sold;
			if (total.bookNo == trans.bookNo)
			{
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;
			}
			else
			{
				std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
				if (total.units_sold != 0)
					std::cout << total.revenue / total.units_sold << std::endl;
				else
					std::cout << "(no sales)" << std::endl;
				total = trans;
			}
		}
		std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
		if (total.units_sold != 0)
			std::cout << total.revenue / total.units_sold << std::endl;
		else
			std::cout << "(no sales)" << std::endl;
	}
	else
	{
		std::cerr << "NO data?!" << std::endl;
		return -1;
	}
	return 0;
}