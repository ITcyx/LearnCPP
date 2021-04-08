#include <iostream>
#include "Sales_data.h"

int main()
{
	Sales_data book;
	while (std::cin >> book.bookNo)
		std::cout << book.bookNo << std::endl;
	return 0;
}