#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <locale.h>
#include "bus.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    bus new_bus;
    init_bus(new_bus);
	new_bus.price = 25;
    while (1) {
		system("cls");
		printf("Меню:\n");
		printf("1. Добавить пассажира\n");
		printf("2. Убрать пассажира\n");
		printf("3. Ввод цены проезда и номера автобуса\n");
		printf("4. Ввод ифнормации о двигателе\n");
		printf("5. Ввод информации о колесах\n");
		printf("6. Ввод информации о водителе\n");
		printf("7. Вывод цены проезда, суммы, занятых мест\n");
		printf("8. Вывод информации о двигателе\n");
		printf("9. Вывод информации о колесах\n");
		printf("10. Вывод информации о водителе\n");
		printf("11. Обнулить сумму\n");
		printf("12. Выход из программы\n\n");
        int choice = 0;
		int flag = 0;
		do {
			if (flag == 0) printf("Выберите пункт меню: ");
			if (flag == 1) printf("Ошибка. Выберите пункт меню: ");
			while (scanf("%d", &choice) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Выберите пункт меню: ");
			}
			flag = 1;
		} while (choice < 1 || choice > 12);
		switch (choice) {
		case 1:
			add_passenger(new_bus);
			break;
		case 2:
			remove_passenger(new_bus);
			break;
		case 3:
			input_bus(new_bus);
			break;
		case 4:
			input_engine(new_bus);
			break;
		case 5:
			input_wheels(new_bus);
			break;
		case 6:
			input_driver(new_bus);
			break;
		case 7:
			print_bus(new_bus);
			break;
		case 8: 
			print_engine(new_bus);
			break;
		case 9:
			print_wheels(new_bus);
			break;
		case 10:
			print_driver(new_bus);
			break;
		case 11:
			new_bus.sum = 0;
			break;
		case 12: 
			return 0;
		}
    }
	return -1;
}