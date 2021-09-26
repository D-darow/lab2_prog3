#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "bus.h"

int add_passenger(bus& object)
{
	if (object.num_of_seats < 32) {
		object.num_of_seats += 1;
		object.sum += object.price;
		printf("Пассажир успешно зашел в автобус и оплатил проезд.\nСвободных мест осталось: %d\n", 32 - object.num_of_seats);
	}
	else {
		printf("Пассажир не смог занять место. Автобус переолнен.\n");
		return -1;
	}
	return 0;
}

int remove_passenger(bus& object)
{
	if (object.num_of_seats > 0) {
		object.num_of_seats -= 1;
		printf("Пассажир успешно покинул автобус.\nСвободных мест осталось: %d\n", 32 - object.num_of_seats);
	}
	else {
		printf("Ошибка. Автобус пуст.\n");
		return -1;
	}
	return 0;
}

void init_bus(bus& object)
{
	object.bus_num = 0;
	object.num_of_seats = 0;
	object.sum = 0;
	object.engine.hs_power = 0;
	object.engine.fuel = 1;
	object.engine.num_of_cylinders = 0;
	object.wheels.diameter_of_disk = 0;
	object.wheels.width_of_tire = 0;
	object.driver.name[0] = '\0';
	object.driver.surname[0] = '\0';
	object.driver.phone_number[0] = '\0';
	object.price = 0;
}

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

void input_engine(bus& object) 
{
	int flag = 0;
	do {
		if (flag == 0) printf("Введите кол-во лошадиных сил: ");
		if (flag == 1) printf("Ошибка. Введите кол-во лошадиных сил: ");
		while (scanf("%d", &object.engine.hs_power) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите кол-во лошадиных сил: ");
		}
		flag = 1;
	} while (object.engine.hs_power < 0);
	flag = 0;
	do {
		if (flag == 0) printf("Выберите род топлива (1 - бензин, 2 - дизель): ");
		if (flag == 1) printf("Ошибка. Выберите род топлива (1 - бензин, 2 - дизель): ");
		while (scanf("%d", &object.engine.fuel) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Выберите род топлива (1 - бензин, 2 - дизель): ");
		}
		flag = 1;
	} while (object.engine.fuel < 1 || object.engine.fuel > 2);
	flag = 0;
	do {
		if (flag == 0) printf("Введите кол-во цилиндров двигателя (2 - 16): ");
		if (flag == 1) printf("Ошибка. Введите кол-во цилиндров двигателя (2 - 16): ");
		while (scanf("%d", &object.engine.num_of_cylinders) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите кол-во цилиндров двигателя (2 - 16): ");
		}
		flag = 1;
	} while (object.engine.num_of_cylinders < 2 || object.engine.num_of_cylinders > 16);
}

void input_wheels(bus& object) 
{
	int flag = 0;
	do {
		if (flag == 0) printf("Введите диаметр диска (Дюйм): ");
		if (flag == 1) printf("Ошибка. Введите диаметр диска (Дюйм): ");
		while (scanf("%d", &object.wheels.diameter_of_disk) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите диаметр диска (Дюйм): ");
		}
		flag = 1;
	} while (object.wheels.diameter_of_disk < 0);
	flag = 0;
	do {
		if (flag == 0) printf("Введите ширину шины (мм): ");
		if (flag == 1) printf("Ошибка. Введите ширину шины (мм): ");
		while (scanf("%d", &object.wheels.width_of_tire) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите ширину шины (мм): ");
		}
		flag = 1;
	} while (object.wheels.width_of_tire < 0);
}

void input_driver(bus& object) 
{
	printf("Введите имя водителя: ");
	scanf("%s", object.driver.name);
	while (getchar() != '\n');
	printf("Введите фамилию водителя: ");
	scanf("%s", object.driver.surname);
	while (getchar() != '\n');
	printf("Введите номер телефона водителя: ");
	scanf("%s", object.driver.phone_number);
	while (getchar() != '\n');
}

void print_bus(bus& object) 
{
	printf("\nНомер автобуса: %d\n", object.bus_num);
	printf("Занятые места: %d\n", object.num_of_seats);
	printf("Цена проезда: %d\n", object.price);
	printf("Сумма заработанных денег: %d\n\n", object.sum);
	printf("Нажмите любую клавишу, чтобы вернуться в меню...");
	_getch();
}

void print_engine(bus& object)
{
	printf("\nИнформация о двигателе\n");
	printf("Количество лошадиных сил: %d\n", object.engine.hs_power);
	printf("Род топлива: ");
	if (object.engine.fuel == 1) {
		printf("Бензин\n");
	}
	else {
		printf("Дизель\n");
	}
	printf("Количество цилиндров: %d\n\n", object.engine.num_of_cylinders);
	printf("Нажмите любую клавишу, чтобы вернуться в меню...");
	_getch();
}

void print_wheels(bus& object)
{
	printf("\nИнформация о колесах\n");
	printf("Диаметр диска (Дюйм): %d\n", object.wheels.diameter_of_disk);
	printf("Ширина шины (мм): %d\n\n", object.wheels.width_of_tire);
	printf("Нажмите любую клавишу, чтобы вернуться в меню...");
	_getch();
}

void print_driver(bus& object)
{
	printf("\nИнформация о водителе\n");
	printf("Имя: %s\n", object.driver.name);
	printf("Фамилия: %s\n", object.driver.surname);
	printf("Номер телефона: %s\n", object.driver.phone_number);
	printf("Нажмите любую клавишу, чтобы вернуться в меню...");
	_getch();
}