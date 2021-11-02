#pragma once
#include "engine.h"
#include "wheels.h"
#include "driver.h"
struct bus {
	int bus_num; // Номер автобуса
	int num_of_seats; // Занятые места (max 32)
	engine bus_engine;
	wheels bus_wheels;
	driver bus_driver;
	int price; // Цена проезда (Руб)
	int sum; // Сумма заработанных денег
};

int add_passenger(bus& object); // Добавить пассажира
int remove_passenger(bus& object); // Убрать пассажира
void init_bus(bus& object); // Инициализация структуры
void input_bus(bus& object); // Ввод цены проезда и номера автобуса
void print_bus(bus object); // Вывод номера, цены, суммы и занятых мест