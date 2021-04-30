#include <iostream>
#include <string>

using std::string;
using std::getline;
using std::cin;

int main()
{
	string a;
	getline(cin, a);  // Read all the char until read a line break char
	cin >> a;  // Read all the char until read a blank char
	return 0;
}