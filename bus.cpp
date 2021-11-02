#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "bus.h"
// �������� ���������
int add_passenger(bus& object) 
{
	if (object.num_of_seats < 32) {
		object.num_of_seats += 1;
		object.sum += object.price;
		printf("\n�������� ������� ����� � ������� � ������� ������.\n��������� ���� ��������: %d\n\n", 32 - object.num_of_seats);
	}
	else {
		printf("\n�������� �� ���� ������ �����. ������� ���������.\n\n");
		printf("������� ����� �������, ����� ��������� � ����...");
		_getch();
		return -1;
	}
	printf("������� ����� �������, ����� ��������� � ����...");
	_getch();
	return 0;
}
// ������ ���������
int remove_passenger(bus& object) 
{
	if (object.num_of_seats > 0) {
		object.num_of_seats -= 1;
		printf("\n�������� ������� ������� �������.\n��������� ���� ��������: %d\n\n", 32 - object.num_of_seats);
	}
	else {
		printf("\n������. ������� ����.\n\n");
		printf("������� ����� �������, ����� ��������� � ����...");
		_getch();
		return -1;
	}
	printf("������� ����� �������, ����� ��������� � ����...");
	_getch();
	return 0;
}
// ������������� ���������
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
// ���� ���� ������� � ������ ��������
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
// ����� ������, ����, ����� � ������� ����
void print_bus(bus object)
{
	printf("\n����� ��������: %d\n", object.bus_num);
	printf("������� �����: %d �� 32\n", object.num_of_seats);
	printf("���� �������: %d\n", object.price);
	printf("����� ������������ �����: %d\n\n", object.sum);
	printf("������� ����� �������, ����� ��������� � ����...");
	_getch();
}