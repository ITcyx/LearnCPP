#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

struct Sales_data
{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main()
{
	Sales_data book;
	while (cin >> book.bookNo)
		cout << book.bookNo << endl;
	return 0;
}