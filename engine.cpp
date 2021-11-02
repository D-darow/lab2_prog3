#define _CRT_SECURE_NO_WARNINGS
#include "engine.h"
#include <iostream>
#include <conio.h>
// Ввод информации о двигателе
void input_engine(engine& object)
{
	int flag = 0;
	do {
		if (flag == 0) printf("Введите кол-во лошадиных сил: ");
		if (flag == 1) printf("Ошибка. Введите кол-во лошадиных сил: ");
		while (scanf("%d", &object.hs_power) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите кол-во лошадиных сил: ");
		}
		flag = 1;
	} while (object.hs_power < 0);
	flag = 0;
	do {
		if (flag == 0) printf("Выберите род топлива (1 - бензин, 2 - дизель): ");
		if (flag == 1) printf("Ошибка. Выберите род топлива (1 - бензин, 2 - дизель): ");
		while (scanf("%d", &object.fuel) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Выберите род топлива (1 - бензин, 2 - дизель): ");
		}
		flag = 1;
	} while (object.fuel < 1 || object.fuel > 2);
	flag = 0;
	do {
		if (flag == 0) printf("Введите кол-во цилиндров двигателя (2 - 16): ");
		if (flag == 1) printf("Ошибка. Введите кол-во цилиндров двигателя (2 - 16): ");
		while (scanf("%d", &object.num_of_cylinders) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите кол-во цилиндров двигателя (2 - 16): ");
		}
		flag = 1;
	} while (object.num_of_cylinders < 2 || object.num_of_cylinders > 16);
}
// Вывод информации о двигателе
void print_engine(engine object)
{
	printf("\nИнформация о двигателе\n");
	printf("Количество лошадиных сил: %d\n", object.hs_power);
	printf("Род топлива: ");
	if (object.fuel == 1) {
		printf("Бензин\n");
	}
	else {
		printf("Дизель\n");
	}
	printf("Количество цилиндров: %d\n\n", object.num_of_cylinders);
	printf("Нажмите любую клавишу, чтобы вернуться в меню...");
	_getch();
}