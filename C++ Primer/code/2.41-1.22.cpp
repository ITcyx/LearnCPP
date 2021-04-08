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
	Sales_data item, book;
	double price;
	std::cin >> book.bookNo >> book.units_sold >> price;
	book.revenue = price * book.units_sold;
	while (std::cin >> item.bookNo >> item.units_sold >> price)
	{
		if (item.bookNo == book.bookNo)
		{
			item.revenue = price * item.units_sold;
			book.units_sold += item.units_sold;
			book.revenue += item.revenue;
		}
		else
		{
			std::cerr << "Data must refer to the same ISBN" << std::endl;
			return -1;
		}
	}
	std::cout << book.bookNo << " " << book.units_sold << " " << book.revenue << " ";
	if (book.units_sold != 0)
		std::cout << book.revenue / book.units_sold << std::endl;
	else
		std::cout << "(no sales)" << std::endl;
	return 0;
}