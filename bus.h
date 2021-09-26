#pragma once

struct bus {
	int bus_num; // Номер автобуса
	int num_of_seats; // Занятые места (max 32)
	struct engine {
		int hs_power; // Лошадиные силы
		int fuel; // Род топлива
		int num_of_cylinders; // Количество цилиндров (от 2 до 16)
	} engine;
	struct wheels {
		int diameter_of_disk; // Диаметр колеса (В дюймах)
		int width_of_tire; // Ширина шины (В мм)
	} wheels;
	struct driver {
		char name[20]; // Имя
		char surname[30]; // Фамилия
		char phone_number[12]; // Номер телефона
	} driver;
	int price; // Цена проезда (Руб)
	int sum; // Сумма заработанных денег
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