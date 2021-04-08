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
	Sales_data item1, item2;
	double totoalRevenue;
	int totalCnt;
	std::cin >> item1.bookNo >> item1.units_sold >> item1.revenue >> item2.bookNo >> item2.units_sold >> item2.revenue;
	if (item1.bookNo == item2.bookNo)
	{
		totalCnt = item1.units_sold + item2.units_sold;
		totoalRevenue = item1.revenue + item2.revenue;
		std::cout << item1.bookNo << " " << totalCnt << " " << totoalRevenue << " ";
		if (totalCnt != 0)
			std::cout << totoalRevenue / totalCnt << std::endl;
		else
			std::cout << "(no sales)" << std::endl;
		return 0;
	}
	else
	{
		std::cerr << "Data must refer to the same ISBN" << std::endl;
		return -1;
	}
}