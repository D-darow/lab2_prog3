#pragma once

struct engine {
	int hs_power; // Лошадиные силы
	int fuel; // Род топлива
	int num_of_cylinders; // Количество цилиндров (от 2 до 16)
};

void input_engine(engine& object); // Ввод информации о двигателе
void print_engine(engine object); // Вывод информации о двигателе