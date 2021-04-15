#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int num1, num2, val;
	cout << "Enter two numbers:" << endl;
	cin >> num1 >> num2;
	val = num1;
	while (val <= num2)
	{
		cout << val << endl;
		++val;
	}
	return 0;
}