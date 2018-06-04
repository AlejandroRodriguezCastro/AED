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
	assert(Abs(4)==4);
	assert(Abs(0)==0);
}

unsigned Abs (int n){return 
	n<0	 ? -n :
			n;
}
