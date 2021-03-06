﻿/* Димитър Валериев Трифонов, КН, 50Б, 146518 */


/*

17. Даден е двумерен масив А с m реда и n стълба. 
Да се състави програма, която създава нов масив а0, а1,...,аm-1, 
като стойността на аi е равна на индекса на най-голямата стойност в i-ия ред.

*/


#include "stdafx.h"
using namespace std;
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void main(){
	system("chcp 1251");

	int A[30][30], m, n;
	int i, j;

	int max[30];
	int max_ind[30];

	cout << "Enter m: "; cin >> m;
	cout << "Enter n: "; cin >> n;

	for (i = 0; i < m; i++){
		max[i] = INT_MIN;
		max_ind[i] = 0;
		cout << endl << i << " ред: " << endl;
		for (j = 0; j < n; j++){
			cout << "- A[" << i << "][" << j << "]: "; cin >> A[i][j];
			if (A[i][j] > max[i]) {
				max[i] = A[i][j];
				max_ind[i] = j;
			}
		}
		
	}

	cout << endl;

	for (i = 0; i < m; i++){
		cout << "Индексът на най-голямата стойност на " << i << " ред: " << max_ind[i] << endl;
	}





	_getch();
}