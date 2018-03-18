#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <time.h>
#include "Header.h"
using namespace std;
void fillArray(int *mas, int lenght)
{
	for (short int i = 0; i < lenght; i++)
		mas[i] = -25 + rand() % 35;
}
void fillArray1(int *mas, int lenght)
{
	for (short int j = 0; j < 10; j++)
		mas[j] = -15 + rand() % 20;
}
void printArray(int *mas, int lenght)
{
	for (short int i = 0; i < lenght; i++)
		printf("%d\t", mas[i]);
}
void SameElementsInArrays(int *mas1, int lenght, int *mas2)
{
	fillArray(mas1, lenght);
	printArray(mas1, lenght);
	fillArray1(mas2, lenght);
	printArray(mas2, lenght);
	for (short int i = 0; i < lenght; i++)
		for (short int j = 0; j < lenght; j++)
		{
			if (mas1[i] == mas2[j])
				printf("Same elements are in %d in first array and %d int second array. \n", i, j);
			else
				printf("These two arrays don't have same elements. \n");
		}
}
void fillArrayIncludes3ElementsAndPrint(int *mas, int lenght2)
{
	for (short int i = 0; i < lenght2; i++)
		mas[i] = 0 + rand() % 10;
	printf("The second array: \n");
	for (short int i = 0; i < lenght2; i++)
		printf("%d\t", *(mas + i));
	printf("\n");
}
void printArrayIncludes7Elements(int *mas3, int lenght3)
{
	int lenght = 10, mas2[3], lenght2 = 3, mas[10];
	printf("The first array: \n");
	fillArray(mas, lenght);
	printArray(mas, lenght);
	printf("\n");
	fillArrayIncludes3ElementsAndPrint(mas2, lenght2);
	printf("\n");
	printf("The third array: \n");
	for (short int i = 0; i < lenght3; i++)
	{
		*(mas3 + i) = *(mas + i);
		printf("%d\t", *(mas3 + i));
	}
	printf("\n");
}
void AntiSameElementsInArrays(int *mas1, int lenght, int *mas2)
{
	fillArray(mas1, lenght);
	printArray(mas1, lenght);
	fillArray1(mas2, lenght);
	printArray(mas2, lenght);
	for (short int i = 0; i < lenght; i++)
		for (short int j = 0; j < lenght; j++)
		{
			if (mas1[i] != mas2[j])
				printf("Anti-same elements are in %d in first array and %d int second array. \n", i, j);
			else
				printf("These two arrays don't have anti-same elements. \n");
		}
}
void In_A_but_not_in_B(int *mas1, int lenght, int *mas2, int *mas3)
{
	fillArray(mas1, lenght);
	printArray(mas1, lenght);
	fillArray1(mas2, lenght);
	printArray(mas2, lenght);
	for (short int i = 0; i < lenght; i++)
	{
		for (short int j = 0; j < lenght; j++)
		{
			*(mas3 + i) = *(mas2 + j);
		}
		printf("Element, which not in second array but in first array has = %d\n", *(mas3 + i));
	}
	//Запутался, где-то ошибка :(
}
void In_B_but_not_in_A(int *mas1, int lenght, int *mas2, int *mas3)
{
	fillArray(mas1, lenght);
	printArray(mas1, lenght);
	fillArray1(mas2, lenght);
	printArray(mas2, lenght);
	for (short int i = 0; i < lenght; i++)
	{
		for (short int j = 0; j < lenght; j++)
		{
			*(mas3 + i) = *(mas1 + i);
		}
		printf("Element, which not in second array but in first array has = %d\n", *(mas3 + i));
	}
}
void Parity(int *T)
{
	printf("Введите число: ");
	cin >> *T;
	if ((*T % 2) == 0)
		printf("Число четное. \n");
	else
		printf("Число нечетное. \n");
}
void SimpleNumber(int *number)
{
	printf("Введите число: ");
	cin >> *number;
	for (short int i = 2; i < 10; i++)
		if (*number % i == 0)
			printf("Число составное. \n");
	if (*number / 1 && *number / *number)
		printf("Число простое. \n");
}
void AbsoluteNumber(int *interval)
{
	int deliteli = 0, counter = 0, number;
	printf("Введите интервал поиска совершенных чисел: ");
	cin >> *interval;
	for (short int i = 0; i < *interval; i++)
	{
		number = i;
		if (number % i == 0)
		{
			counter++;
		}
		deliteli += counter;
	}
	for (short int i = 0; i < *interval; i++)
	{
		if (counter == number)
			printf("Число %d - совершенное. \n", number);
		else
			printf("Число %d - несовершенное. \n", number);
	}
}
void MaxElementInArray(int *mas, int lenght)
{
	fillArray(mas, lenght);
	printArray(mas, lenght);
	int max = mas[0];
	for (short int i = 0; i < lenght; i++)
		if (*(mas + i) > max)
			max = *(mas + i);
	printf("Максимальный элемент массива = %d.\n", max);
}
void SummaElementovArray(int *mas1, int *mas2, int *mas3)
{
	int summa[10];
	int lenght = 10;
	printf("First array: \n");
	fillArray(mas1, lenght);
	printArray(mas1, lenght);
	printf("Second array: \n");
	fillArray(mas2, lenght);
	printArray(mas2, lenght);
	for (short int i = 0; i < lenght; i++)
	{
		*(summa + i) = *(mas1 + i) + *(mas2 + i);
		printf("Сумма поэлементного сложения 2-ух массивов = %d. \n", *(summa + i));
	}
}
void HappyTicket(int *number)
{
	printf("Введите число: ");
	cin >> *number;
	if (((*number % 10) + ((*number % 100) / 10) + ((*number % 1000) / 100)) == (*number / 100000) + ((*number / 10000) % 10) + (*number / 1000) % 10)
		printf("Счастливое число. \n");
	else 
		printf("Несчатсливое число. \n");
}