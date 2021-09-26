#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "bus.h"

int add_passenger(bus& object)
{
	if (object.num_of_seats < 32) {
		object.num_of_seats += 1;
		object.sum += object.price;
		printf("�������� ������� ����� � ������� � ������� ������.\n��������� ���� ��������: %d\n", 32 - object.num_of_seats);
	}
	else {
		printf("�������� �� ���� ������ �����. ������� ���������.\n");
		return -1;
	}
	return 0;
}

int remove_passenger(bus& object)
{
	if (object.num_of_seats > 0) {
		object.num_of_seats -= 1;
		printf("�������� ������� ������� �������.\n��������� ���� ��������: %d\n", 32 - object.num_of_seats);
	}
	else {
		printf("������. ������� ����.\n");
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
		if (flag == 0) printf("������� ����� ��������: ");
		if (flag == 1) printf("������. ������� ����� ��������: ");
		while (scanf("%d", &object.bus_num) != 1) {
			while (getchar() != '\n');
			printf("������. ������� ����� ��������: ");
		}
		flag = 1;
	} while (object.bus_num < 0 );
	flag = 0;
	do {
		if (flag == 0) printf("������� ���� �������: ");
		if (flag == 1) printf("������. ������� ���� �������: ");
		while (scanf("%d", &object.price) != 1) {
			while (getchar() != '\n');
			printf("������. ������� ���� �������: ");
		}
		flag = 1;
	} while (object.price < 0);
}

void input_engine(bus& object) 
{
	int flag = 0;
	do {
		if (flag == 0) printf("������� ���-�� ��������� ���: ");
		if (flag == 1) printf("������. ������� ���-�� ��������� ���: ");
		while (scanf("%d", &object.engine.hs_power) != 1) {
			while (getchar() != '\n');
			printf("������. ������� ���-�� ��������� ���: ");
		}
		flag = 1;
	} while (object.engine.hs_power < 0);
	flag = 0;
	do {
		if (flag == 0) printf("�������� ��� ������� (1 - ������, 2 - ������): ");
		if (flag == 1) printf("������. �������� ��� ������� (1 - ������, 2 - ������): ");
		while (scanf("%d", &object.engine.fuel) != 1) {
			while (getchar() != '\n');
			printf("������. �������� ��� ������� (1 - ������, 2 - ������): ");
		}
		flag = 1;
	} while (object.engine.fuel < 1 || object.engine.fuel > 2);
	flag = 0;
	do {
		if (flag == 0) printf("������� ���-�� ��������� ��������� (2 - 16): ");
		if (flag == 1) printf("������. ������� ���-�� ��������� ��������� (2 - 16): ");
		while (scanf("%d", &object.engine.num_of_cylinders) != 1) {
			while (getchar() != '\n');
			printf("������. ������� ���-�� ��������� ��������� (2 - 16): ");
		}
		flag = 1;
	} while (object.engine.num_of_cylinders < 2 || object.engine.num_of_cylinders > 16);
}

void input_wheels(bus& object) 
{
	int flag = 0;
	do {
		if (flag == 0) printf("������� ������� ����� (����): ");
		if (flag == 1) printf("������. ������� ������� ����� (����): ");
		while (scanf("%d", &object.wheels.diameter_of_disk) != 1) {
			while (getchar() != '\n');
			printf("������. ������� ������� ����� (����): ");
		}
		flag = 1;
	} while (object.wheels.diameter_of_disk < 0);
	flag = 0;
	do {
		if (flag == 0) printf("������� ������ ���� (��): ");
		if (flag == 1) printf("������. ������� ������ ���� (��): ");
		while (scanf("%d", &object.wheels.width_of_tire) != 1) {
			while (getchar() != '\n');
			printf("������. ������� ������ ���� (��): ");
		}
		flag = 1;
	} while (object.wheels.width_of_tire < 0);
}

void input_driver(bus& object) 
{
	printf("������� ��� ��������: ");
	scanf("%s", object.driver.name);
	while (getchar() != '\n');
	printf("������� ������� ��������: ");
	scanf("%s", object.driver.surname);
	while (getchar() != '\n');
	printf("������� ����� �������� ��������: ");
	scanf("%s", object.driver.phone_number);
	while (getchar() != '\n');
}

void print_bus(bus& object) 
{
	printf("\n����� ��������: %d\n", object.bus_num);
	printf("������� �����: %d\n", object.num_of_seats);
	printf("���� �������: %d\n", object.price);
	printf("����� ������������ �����: %d\n\n", object.sum);
	printf("������� ����� �������, ����� ��������� � ����...");
	_getch();
}

void print_engine(bus& object)
{
	printf("\n���������� � ���������\n");
	printf("���������� ��������� ���: %d\n", object.engine.hs_power);
	printf("��� �������: ");
	if (object.engine.fuel == 1) {
		printf("������\n");
	}
	else {
		printf("������\n");
	}
	printf("���������� ���������: %d\n\n", object.engine.num_of_cylinders);
	printf("������� ����� �������, ����� ��������� � ����...");
	_getch();
}

void print_wheels(bus& object)
{
	printf("\n���������� � �������\n");
	printf("������� ����� (����): %d\n", object.wheels.diameter_of_disk);
	printf("������ ���� (��): %d\n\n", object.wheels.width_of_tire);
	printf("������� ����� �������, ����� ��������� � ����...");
	_getch();
}

void print_driver(bus& object)
{
	printf("\n���������� � ��������\n");
	printf("���: %s\n", object.driver.name);
	printf("�������: %s\n", object.driver.surname);
	printf("����� ��������: %s\n", object.driver.phone_number);
	printf("������� ����� �������, ����� ��������� � ����...");
	_getch();
}