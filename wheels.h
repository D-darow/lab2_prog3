#pragma once

struct wheels {
	int diameter_of_disk; // ������� ������ (� ������)
	int width_of_tire; // ������ ���� (� ��)
};

void input_wheels(wheels& object); // ���� ���������� � �������
void print_wheels(wheels object); // ����� ���������� � �������