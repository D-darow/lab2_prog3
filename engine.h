#pragma once

struct engine {
	int hs_power; // ��������� ����
	int fuel; // ��� �������
	int num_of_cylinders; // ���������� ��������� (�� 2 �� 16)
};

void input_engine(engine& object); // ���� ���������� � ���������
void print_engine(engine object); // ����� ���������� � ���������