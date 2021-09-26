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
		char name[20]; // ���
		char surname[30]; // �������
		char phone_number[12]; // ����� ��������
	} driver;
	int price; // ���� ������� (���)
	int sum; // ����� ������������ �����
};

int add_passenger(bus& object);
int remove_passenger(bus& object);
void init_bus(bus& object);
void input_bus(bus& object);
void input_engine(bus& object);
void input_wheels(bus& object);
void input_driver(bus& object);
void print_bus(bus& object);
void print_engine(bus& object);
void print_wheels(bus& object);
void print_driver(bus& object);