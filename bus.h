#include <iostream>
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
		std::string name; // Имя
		std::string surname; // Фамилия
		std::string phone_number; // Номер телефона
	} driver;
	int price; // Цена проезда (Руб)
	int sum; // Сумма заработанных денег
};