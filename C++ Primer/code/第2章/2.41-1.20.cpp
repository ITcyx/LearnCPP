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
	Sales_data book;
	while (std::cin >> book.bookNo)
		std::cout << book.bookNo << std::endl;
	return 0;
}