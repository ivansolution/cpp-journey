﻿/* Димитър Валериев Трифонов, КН, 50Б, 146518 */


/*

4. Да се намери при кое от две зададени цели числа средно-аритметичното на цифрите е по-голяма.

*/

#include "stdafx.h"
using namespace std;
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string>

int avgCifriLarger(int number1, int number2){
	
	int M = number1, N = number2;			// число 1 и 2
	int c_1, c_2;							// цифрa на число 1 и 2
	double brCifri_1 = 0, brCifri_2 = 0;	// брой цифри на число 1 и 2
	double sum_1 = 0, sum_2 = 0;			// сума на цифрите на число 1 и 2
	double avg_1 = 0.0, avg_2 = 0.0;		// средно-аритметично на цифрите на число 1 и 2
	
	while (M > 0)
	{
		c_1 = M % 10;
		brCifri_1++;
		sum_1 += c_1;
		M /= 10;
	}
	while (N > 0)
	{
		c_2 = N % 10;
		brCifri_2++;
		sum_2 += c_2;
		N /= 10;
	}

	avg_1 = sum_1 / brCifri_1;
	avg_2 = sum_2 / brCifri_2;

	if (avg_1 > avg_2) { return number1; }
	if (avg_1 < avg_2) { return number2; }
	if (avg_1 == avg_2) { return 0; }
}

// Главна функция
void main(){
	system("chcp 1251");

	int a, b;

	cout << "Enter a: "; cin >> a;
	cout << "Enter b: "; cin >> b;

	int result = avgCifriLarger(a, b);

	if (result != 0)
		cout << endl << "Числото " << result << " има по-голямо средно-аритметично на цифрите." << endl;
	else
		cout << endl << "Числата имат еднакво средно-аритметично на цифрите." << endl;


	_getch();
}