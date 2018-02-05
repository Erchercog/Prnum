// PimeNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <iterator>
#include <windows.h>
using namespace std;


int main()
{
	const int c = 1000000;
	int num = 2;//, denom;					// num = numerator (числитель); denom = denomenator (знаменатель)
	int quo, i, j = 1;					// quo = quotient (частное)
	vector<int> prnum;					// prnum = prime numbers (простые числа)
	

	prnum.insert(prnum.end(), num);
	cout << num << endl;

	for (num = 3; num <= c; num++)		//Цикл перечисления чисел
	{
		Sleep(1);
		for (i = 1; i < prnum.size(); i++)		//Цикл нахождения простых чисел
		{
			quo = num % prnum[i];		//Функция нахождения частного

			if (quo == 0)				//Проверка целочисленности частного (если целочисленно, то число составное, если нет, то цикл считается дальше)
			{
				break;					//Выход из цикла досрочно
			}
		}

		if (i == prnum.size() && num != 4)						//Проверка прохождения цикла целиком (если да, то число простое)
		{
			j += 1;						//Счётчик простых чисел
			prnum.insert(prnum.end(), num);			//Запись нового простого числа
			//cout << num << endl;
		}
		/*for (denom = 2; denom < num; denom++)
		{
		quo = num % denom;
		//Основной закон арифметки гласит, что каждое составное число состоит из уникального произведения простых. Эту прогу можно оптимизировать

		if (quo == 0)	//проверка целочисленности частного
		{
		break;
		}
		}

		if (denom == num)
		{
		i += 1;
		//cout << num << endl;
		}*/

	}
	//copy(prnum.begin(), prnum.end(), ostream_iterator<int>(cout, ""));
	cout << "All = " << j << endl;		//Вывод количества простых чисел
	return 0;
}

