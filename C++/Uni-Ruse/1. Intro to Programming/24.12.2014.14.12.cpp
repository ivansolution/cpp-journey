/* Димитър Валериев Трифонов, КН, 50Б, 146518 */

/* УПР 2 (извънаудиторна работа */
/* 17. Да се състави алгоритъм, който намира разликата между сумата от третите степени на
четните цифри и сумата от вторите степени на нечетните цифри на зададено цяло число.


 */

#include "stdafx.h"
using namespace std;
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void main(){
	system("chcp 1251");

	int chislo;				// Цяло число
	int c;					// Цифра на число
	int sumChetniCifri = 1;
	int sumNechetniCifri = 1;
	int razlika;

	cout << endl << "Въведи цяло число: "; cin >> chislo;

	while (chislo > 0)
	{
		c = chislo % 10;
		if (c % 2 == 0)
		{ sumChetniCifri += c*c*c; }
		else 
		{ sumNechetniCifri += c*c; }
		razlika = sumChetniCifri - sumNechetniCifri;
		chislo = chislo / 10;
	}

	cout << endl << "Резултатът е " << razlika;


	_getch();
}