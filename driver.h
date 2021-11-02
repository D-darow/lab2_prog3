#pragma once

struct driver {
	char name[20]; // Имя
	char surname[30]; // Фамилия
	char phone_number[12]; // Номер телефона
};

void input_driver(driver& object); // Ввод информации о водителе
void print_driver(driver object); // Вывод информации о водителе