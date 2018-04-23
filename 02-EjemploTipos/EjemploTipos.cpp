/* 
 * Ejemplos de tipos de variables
 * 20180419
 *
 * Author: Alejandro Gabriel Rodriguez Castro
 */

#include <iostream>
#include <string>
#include <cassert>

int main()
{
	int entera=-10;
	bool booleana=true;
	char caracter='A';
	unsigned sinsigno=900;
	double doble=150;
	std::string cadena = "Soy String";


	assert(entera/10 == -1);
	assert(booleana != false);
	assert(caracter == 'A');
	assert(sinsigno * 100 == 90000);
	assert(doble + 2.5 == 152.5 );
	assert(cadena.length() == 10);
}
