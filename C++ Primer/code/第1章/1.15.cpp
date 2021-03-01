#include <iostream>

void foo(int val)
{
	std::wcout << val << std::endl;
}

// synatx error: symbol ) is missing behind of main
int main({
	// synatx error: use symbol : instead of symbol ; behind of endl
	std::cout << "Read each file." << std::endl:
	// synatx error: symbol "" are missing from both sides of string literal
	std::cout << Update master. << std::endl;
	// synatx error: symbol << are missing behind of string literal
	std::cout << "Write new master"std::endl;
	// type error: pass a string literal to a function with a parameter of int
	foo("hello");
	int v1 = 0, v2 = 0;
	// declaration error: use v instead of v1
	std::cin >> v >> v2;
	//declaration error: cout is not define, maybe is std::cout
	cout << v1 + v2 << std::endl;
	// synatx error: symbol ; is missing behind of 0
	return 0
}