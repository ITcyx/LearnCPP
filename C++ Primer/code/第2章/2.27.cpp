#include <iostream>

int main()
{
	int a_i = -1, &a_r = 0;  // &a_r = 0 is an error
	int *const b_p2 = &b_i2;
	const int c_i = -1, &c_r = 0;
	const int *const d_p3 = &d_i2;
	const int *e_p1 = &e_i2;
	const int &const f_r2;  //Error
	const int g_i2 = g_i, &g_r = g_i;  // If g_i is not const int, then g_i2 = g_i is an error
	return 0;
}