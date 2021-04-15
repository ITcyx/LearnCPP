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
	Sales_data total;
	double price;
	if (cin >> total.bookNo >> total.units_sold >> price)
	{
		total.revenue = price * total.units_sold;
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.units_sold >> price)
		{
			trans.revenue = price * trans.units_sold;
			if (total.bookNo == trans.bookNo)
			{
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;
			}
			else
			{
				cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
				if (total.units_sold != 0)
					cout << total.revenue / total.units_sold << endl;
				else
					cout << "(no sales)" << endl;
				total = trans;
			}
		}
		cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
		if (total.units_sold != 0)
			cout << total.revenue / total.units_sold << endl;
		else
			cout << "(no sales)" << endl;
	}
	else
	{
		cerr << "NO data?!" << endl;
		return -1;
	}
	return 0;
}