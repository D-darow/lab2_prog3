#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "wheels.h"
// Ввод информации о колесах
void input_wheels(wheels& object)
{
	int flag = 0;
	do {
		if (flag == 0) printf("Введите диаметр диска (Дюйм): ");
		if (flag == 1) printf("Ошибка. Введите диаметр диска (Дюйм): ");
		while (scanf("%d", &object.diameter_of_disk) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите диаметр диска (Дюйм): ");
		}
		flag = 1;
	} while (object.diameter_of_disk < 0);
	flag = 0;
	do {
		if (flag == 0) printf("Введите ширину шины (мм): ");
		if (flag == 1) printf("Ошибка. Введите ширину шины (мм): ");
		while (scanf("%d", &object.width_of_tire) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите ширину шины (мм): ");
		}
		flag = 1;
	} while (object.width_of_tire < 0);
}
// Вывод информации о колесах
void print_wheels(wheels object)
{
	printf("\nИнформация о колесах\n");
	printf("Диаметр диска (Дюйм): %d\n", object.diameter_of_disk);
	printf("Ширина шины (мм): %d\n\n", object.width_of_tire);
	printf("Нажмите любую клавишу, чтобы вернуться в меню...");
	_getch();
}