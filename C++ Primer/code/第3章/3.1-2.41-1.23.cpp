#include <iostream>
#include <string>

using std::string;
using std::cout;
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
	Sales_data total, trans;
	double price;
	int i = 0;
	if (cin >> total.bookNo >> total.units_sold >> price)
	{
		++i;
		total.revenue = price * total.units_sold;
		while (cin >> trans.bookNo >> trans.units_sold >> price)
		{
			trans.revenue = price * trans.units_sold;
			if (total.bookNo == trans.bookNo)
				++i;
			else
			{
				cout << total.bookNo << " " << i << endl;
				i = 1;
				total = trans;
			}
		}
		cout << total.bookNo << " " << i << endl;
	}
	return 0;
}