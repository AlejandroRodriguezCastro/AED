/* 
 * Ejemplos de tipos de variables
 * 20180419
 *
 * Author: Alejandro Gabriel Rodriguez Castro
 */

#include <iostream>

int main()
{
	int entera=-10;
	bool booleana=true;
	char caracter='A';
	unsigned sinsigno=900;
	double doble=123235243523;
	char cadena[12] = "Soy String";

	if (booleana == true)
	{
		std::cout << "La variable tipo bool tiene valor \"true\" y representa 1 bit en memoria\n";
	}
	if (entera == -10)
	{
		std::cout << "La variable tipo int tiene valor " << entera << " y tiene tamaño de " << sizeof(entera) << " Bytes\n";
	}
	if (caracter == 'A')
	{
		std::cout << "La variable tipo char tiene valor " << caracter << " y tiene tamaño de 1 Byte en memoria\n";
	}
	if (sinsigno == 900)
	{
		std::cout << "La variable tipo unsigned tiene valor " << sinsigno << " y tiene tamaño " << sizeof(sinsigno) << " Bytes, aparte no tiene signo negativo\n";
	}
	if (doble == 123235243523)
	{
		std::cout << "La variable tipo double tiene valor " << doble << " y tiene tamaño " << sizeof(doble) << " Bytes, tiene el doble de tamaño que la variable int\n";
	}
		std::cout << "La variable tipo string tiene valor " << cadena << " y tiene tamaño " << sizeof(cadena) << " Bytes\n";
		std::cout << "Tambien existe la variable vacia \"void\", puntero null \"null pointer\" y las estructuras  \"struct\" que reunen conjunto de variables; entre otras\n";
}
