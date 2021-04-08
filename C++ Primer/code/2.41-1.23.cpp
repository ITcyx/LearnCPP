#include <iostream>
#include <string>

struct Sales_data
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main()
{
	Sales_data total, trans;
	double price;
	int i = 0;
	if (std::cin >> total.bookNo >> total.units_sold >> price)
	{
		++i;
		total.revenue = price * total.units_sold;
		while (std::cin >> trans.bookNo >> trans.units_sold >> price)
		{
			trans.revenue = price * trans.units_sold;
			if (total.bookNo == trans.bookNo)
				++i;
			else
			{
				std::cout << total.bookNo << " " << i << std::endl;
				i = 1;
				total = trans;
			}
		}
		std::cout << total.bookNo << " " << i << std::endl;
	}
	return 0;
}