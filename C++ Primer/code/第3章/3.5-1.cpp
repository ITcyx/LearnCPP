#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string t, str;
	while (cin >> t)
		str += t;
	cout << str << endl;
	return 0;
}