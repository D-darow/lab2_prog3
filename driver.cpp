#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "driver.h"
// ���� ���������� � ��������
void input_driver(driver& object)
{
	printf("������� ��� ��������: ");
	scanf("%s", object.name);
	while (getchar() != '\n');
	printf("������� ������� ��������: ");
	scanf("%s", object.surname);
	while (getchar() != '\n');
	printf("������� ����� �������� ��������: ");
	scanf("%s", object.phone_number);
	while (getchar() != '\n');
}
// ����� ���������� � ��������
void print_driver(driver object)
{
	printf("\n���������� � ��������\n");
	printf("���: %s\n", object.name);
	printf("�������: %s\n", object.surname);
	printf("����� ��������: %s\n\n", object.phone_number);
	printf("������� ����� �������, ����� ��������� � ����...");
	_getch();
}