#include <iostream>

int main()
{
	char a[] = "Who goes with F\145rgus?\012";
	double b = 3.14e1L;
	float c = 1024f;  // Here is an error. c is an illegal float.
	double d = 3.14L;
	return 0;
}