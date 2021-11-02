#define _CRT_SECURE_NO_WARNINGS
#include "engine.h"
#include <iostream>
#include <conio.h>
// ���� ���������� � ���������
void input_engine(engine& object)
{
	int flag = 0;
	do {
		if (flag == 0) printf("������� ���-�� ��������� ���: ");
		if (flag == 1) printf("������. ������� ���-�� ��������� ���: ");
		while (scanf("%d", &object.hs_power) != 1) {
			while (getchar() != '\n');
			printf("������. ������� ���-�� ��������� ���: ");
		}
		flag = 1;
	} while (object.hs_power < 0);
	flag = 0;
	do {
		if (flag == 0) printf("�������� ��� ������� (1 - ������, 2 - ������): ");
		if (flag == 1) printf("������. �������� ��� ������� (1 - ������, 2 - ������): ");
		while (scanf("%d", &object.fuel) != 1) {
			while (getchar() != '\n');
			printf("������. �������� ��� ������� (1 - ������, 2 - ������): ");
		}
		flag = 1;
	} while (object.fuel < 1 || object.fuel > 2);
	flag = 0;
	do {
		if (flag == 0) printf("������� ���-�� ��������� ��������� (2 - 16): ");
		if (flag == 1) printf("������. ������� ���-�� ��������� ��������� (2 - 16): ");
		while (scanf("%d", &object.num_of_cylinders) != 1) {
			while (getchar() != '\n');
			printf("������. ������� ���-�� ��������� ��������� (2 - 16): ");
		}
		flag = 1;
	} while (object.num_of_cylinders < 2 || object.num_of_cylinders > 16);
}
// ����� ���������� � ���������
void print_engine(engine object)
{
	printf("\n���������� � ���������\n");
	printf("���������� ��������� ���: %d\n", object.hs_power);
	printf("��� �������: ");
	if (object.fuel == 1) {
		printf("������\n");
	}
	else {
		printf("������\n");
	}
	printf("���������� ���������: %d\n\n", object.num_of_cylinders);
	printf("������� ����� �������, ����� ��������� � ����...");
	_getch();
}