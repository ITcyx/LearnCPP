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
	Sales_data item1, item2;
	double totalRevenue, price;
	int totalCnt;
	cin >> item1.bookNo >> item1.units_sold >> price;
	item1.revenue = price * item1.units_sold;
	cin >> item2.bookNo >> item2.units_sold >> price;
	item2.revenue = price * item2.units_sold;
	if (item1.bookNo == item2.bookNo)
	{
		totalCnt = item1.units_sold + item2.units_sold;
		totalRevenue = item1.revenue + item2.revenue;
		cout << item1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if (totalCnt != 0)
			cout << totalRevenue / totalCnt << endl;
		else
			cout << "(no sales)" << endl;
		return 0;
	}
	else
	{
		cerr << "Data must refer to the same ISBN" << endl;
		return -1;
	}
}