/* 
 * Funcion Abs
 * 20180422
 *
 * Author: Alejandro Gabriel Rodriguez Castro
 */

#include <iostream>
#include <cassert>

unsigned Abs(int);

int main()
{
	assert(Abs(-4)==4);
}

unsigned Abs (int n)
{
	return ((n*n)/(-n));
}
