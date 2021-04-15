#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cerr;
using std::cin;
using std::endl;

struct Sales_data
{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main()
{
	Sales_data item, book;
	double price;
	cin >> book.bookNo >> book.units_sold >> price;
	book.revenue = price * book.units_sold;
	while (cin >> item.bookNo >> item.units_sold >> price)
	{
		if (item.bookNo == book.bookNo)
		{
			item.revenue = price * item.units_sold;
			book.units_sold += item.units_sold;
			book.revenue += item.revenue;
		}
		else
		{
			cerr << "Data must refer to the same ISBN" << endl;
			return -1;
		}
	}
	cout << book.bookNo << " " << book.units_sold << " " << book.revenue << " ";
	if (book.units_sold != 0)
		cout << book.revenue / book.units_sold << endl;
	else
		cout << "(no sales)" << endl;
	return 0;
}