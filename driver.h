#pragma once

struct driver {
	char name[20]; // ���
	char surname[30]; // �������
	char phone_number[12]; // ����� ��������
};

void input_driver(driver& object); // ���� ���������� � ��������
void print_driver(driver object); // ����� ���������� � ��������