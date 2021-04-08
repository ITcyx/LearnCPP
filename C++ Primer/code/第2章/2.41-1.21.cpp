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
	double totalRevenue, price;
	int totalCnt;
	std::cin >> item1.bookNo >> item1.units_sold >> price;
	item1.revenue = price * item1.units_sold;
	std::cin >> item2.bookNo >> item2.units_sold >> price;
	item2.revenue = price * item2.units_sold;
	if (item1.bookNo == item2.bookNo)
	{
		totalCnt = item1.units_sold + item2.units_sold;
		totalRevenue = item1.revenue + item2.revenue;
		std::cout << item1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if (totalCnt != 0)
			std::cout << totalRevenue / totalCnt << std::endl;
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