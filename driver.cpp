#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "driver.h"
// Ввод информации о водителе
void input_driver(driver& object)
{
	printf("Введите имя водителя: ");
	scanf("%s", object.name);
	while (getchar() != '\n');
	printf("Введите фамилию водителя: ");
	scanf("%s", object.surname);
	while (getchar() != '\n');
	printf("Введите номер телефона водителя: ");
	scanf("%s", object.phone_number);
	while (getchar() != '\n');
}
// Вывод информации о водителе
void print_driver(driver object)
{
	printf("\nИнформация о водителе\n");
	printf("Имя: %s\n", object.name);
	printf("Фамилия: %s\n", object.surname);
	printf("Номер телефона: %s\n\n", object.phone_number);
	printf("Нажмите любую клавишу, чтобы вернуться в меню...");
	_getch();
}