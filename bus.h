#include <iostream>
#pragma once

struct bus {
	int bus_num; // ����� ��������
	int num_of_seats; // ������� ����� (max 32)
	struct engine {
		int hs_power; // ��������� ����
		int fuel; // ��� �������
		int num_of_cylinders; // ���������� ��������� (�� 2 �� 16)
	} engine;
	struct wheels {
		int diameter_of_disk; // ������� ������ (� ������)
		int width_of_tire; // ������ ���� (� ��)
	} wheels;
	struct driver {
		std::string name; // ���
		std::string surname; // �������
		std::string phone_number; // ����� ��������
	} driver;
	int price; // ���� ������� (���)
	int sum; // ����� ������������ �����
};