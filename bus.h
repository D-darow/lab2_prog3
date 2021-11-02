#pragma once
#include "engine.h"
#include "wheels.h"
#include "driver.h"
struct bus {
	int bus_num; // ����� ��������
	int num_of_seats; // ������� ����� (max 32)
	engine bus_engine;
	wheels bus_wheels;
	driver bus_driver;
	int price; // ���� ������� (���)
	int sum; // ����� ������������ �����
};

int add_passenger(bus& object); // �������� ���������
int remove_passenger(bus& object); // ������ ���������
void init_bus(bus& object); // ������������� ���������
void input_bus(bus& object); // ���� ���� ������� � ������ ��������
void print_bus(bus object); // ����� ������, ����, ����� � ������� ����