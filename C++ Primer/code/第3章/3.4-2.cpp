#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	if (str1.size() == str2.size())
		cout << "The strings are the same length." << endl;
	else
	{
		cout << "The longer string is: ";
		if (str1.size() > str2.size())
			cout << str1 << endl;
		else
			cout << str2 << endl;
	}
	return 0;
}