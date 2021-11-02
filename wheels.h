#pragma once

struct wheels {
	int diameter_of_disk; // Диаметр колеса (В дюймах)
	int width_of_tire; // Ширина шины (В мм)
};

void input_wheels(wheels& object); // Ввод информации о колесах
void print_wheels(wheels object); // Вывод информации о колесах