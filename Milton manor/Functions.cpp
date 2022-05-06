#include <iostream>
#include "Functions.h"
using namespace std;

// ��������
void showTitle() {
	cout << "\t____   __          ___   __  ___       ___" << endl;
	cout << "\t|  |  /  \\  |\\/|  /__/  /     |  |__  /__/" << endl;
	cout << "    .   |  |  \\__/  |  |  \\__   \\__   |  |__| \\__" << endl;

	cout << "   /|\\\t\t\t     ___   __\t          ___^_" << endl;
	cout << "   /|\\      |\\/|  | /|   /\\   |   /  \\  |__|     /_____\\" << endl;
	cout << "    |       |  |  |/ |  /  \\  |   \\__/  |  |     |_____|" << endl;
}

// ����
void input() {
	cout << "\n�������� ����� -> ";
}

// ����� �����
void showPoints(int& S, int& I, int& C, int& L) {
	cout << "\n���� ����:\n";
	cout << "���� " << S << endl << "��������� " << I << endl << "�������� " << C << endl << "������ " << L << endl;
}

// ����
void menu() {
	cout << "����:\n1. ������\n2. �������� ����\n������� ������� -> ";
	int n;
	cin >> n;
}

// ������ ������������� �����
void firstspread(int& S, int& I, int& C) {
	int points = 5;
	int number = 0;
	cout << "� ������ ���� � ��� " << points << " �����. �� ������ ������������ �� �� ������������ �������." << endl;
	cout << "1. ����;\n2. ���������;\n3. ��������;\n";
	while (points != 0) {
		cout << "�������� " << points << endl << "�������� �������������� ��� ���������� 1 ���� -> ";
		cin >> number;
		input3Error(number);
		if (number == 1)
			S++;
		else
			if (number == 2)
				I++;
			else
				C++;
		points--;
		
		cout << "1. ���� " << S << endl << "2. ��������� " << I << endl << "3. �������� " << C << endl;
	}
}

// ������ �� ������������� ����� ���  2 ���������
void input2Error(int &a) {
	while (a != 1 && a != 2) {
		cout << "\n������� ����� -> ";
		cin >> a;
	}
}

// ������ �� ������������� ����� ��� 3 ���������
void input3Error(int& a) {
	while (a != 1 && a != 2 && a != 3) {
		cout << "\n������� ����� -> ";
		cin >> a;
	}
}

// ������� �� ����� ��������
void Enter() {
	cout << endl << endl;
	system("pause");
	system("cls");
}