#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "bus.h"
// Добавить пассажира
int add_passenger(bus& object) 
{
	if (object.num_of_seats < 32) {
		object.num_of_seats += 1;
		object.sum += object.price;
		printf("\nПассажир успешно зашел в автобус и оплатил проезд.\nСвободных мест осталось: %d\n\n", 32 - object.num_of_seats);
	}
	else {
		printf("\nПассажир не смог занять место. Автобус переолнен.\n\n");
		printf("Нажмите любую клавишу, чтобы вернуться в меню...");
		_getch();
		return -1;
	}
	printf("Нажмите любую клавишу, чтобы вернуться в меню...");
	_getch();
	return 0;
}
// Убрать пассажира
int remove_passenger(bus& object) 
{
	if (object.num_of_seats > 0) {
		object.num_of_seats -= 1;
		printf("\nПассажир успешно покинул автобус.\nСвободных мест осталось: %d\n\n", 32 - object.num_of_seats);
	}
	else {
		printf("\nОшибка. Автобус пуст.\n\n");
		printf("Нажмите любую клавишу, чтобы вернуться в меню...");
		_getch();
		return -1;
	}
	printf("Нажмите любую клавишу, чтобы вернуться в меню...");
	_getch();
	return 0;
}
// Инициализация структуры
void init_bus(bus& object) 
{
	object.bus_num = 0;
	object.num_of_seats = 0;
	object.sum = 0;
	object.bus_engine.hs_power = 0;
	object.bus_engine.fuel = 1;
	object.bus_engine.num_of_cylinders = 0;
	object.bus_wheels.diameter_of_disk = 0;
	object.bus_wheels.width_of_tire = 0;
	object.bus_driver.name[0] = '\0';
	object.bus_driver.surname[0] = '\0';
	object.bus_driver.phone_number[0] = '\0';
	object.price = 0;
}
// Ввод цены проезда и номера автобуса
void input_bus(bus& object) 
{
	int flag = 0;
	do {
		if (flag == 0) printf("Введите номер автобуса: ");
		if (flag == 1) printf("Ошибка. Введите номер автобуса: ");
		while (scanf("%d", &object.bus_num) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите номер автобуса: ");
		}
		flag = 1;
	} while (object.bus_num < 0 );
	flag = 0;
	do {
		if (flag == 0) printf("Введите цену проезда: ");
		if (flag == 1) printf("Ошибка. Введите цену проезда: ");
		while (scanf("%d", &object.price) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите цену проезда: ");
		}
		flag = 1;
	} while (object.price < 0);
}
// Вывод номера, цены, суммы и занятых мест
void print_bus(bus object)
{
	printf("\nНомер автобуса: %d\n", object.bus_num);
	printf("Занятые места: %d из 32\n", object.num_of_seats);
	printf("Цена проезда: %d\n", object.price);
	printf("Сумма заработанных денег: %d\n\n", object.sum);
	printf("Нажмите любую клавишу, чтобы вернуться в меню...");
	_getch();
}