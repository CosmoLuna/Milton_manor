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

// ������ �� ������������� ����� ��� 2 ���������
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

// ����
void menu(string name, string& loveChoice, int& strength, int& intelligence, int& courage, int &love, bool &Thomas, bool& complete1, bool& complete2, bool& complete3, bool& complete4, bool& complete5, bool& complete6, bool& complete7) {
	int n, m = 1;
	do {
		system("cls");
		cout << "����\n1. ������\n2. ���������� ����\n3. ��������� ����\n";
		input();
		cin >> n;
		input3Error(n);
		switch (n) {
		case 1: loadDay(name, loveChoice, strength, intelligence, courage, love, Thomas, complete1, complete2, complete3, complete4, complete5, complete6, complete7); break;
		case 2: system("cls"); showPoints(strength, intelligence, courage, love); cout << endl; system("pause"); break;
		case 3: 
			if (n == 3) {
				system("cls");
				cout << "�� �������? �������� ����� ������.\n1. ��\n2. ���\n";
				input();
				cin >> m;
				input2Error(m);
				if (m == 1)
					exit(0);
			}
		}
	} while (m != 3);
}

// �������� ���
void loadDay(string name, string& loveChoice, int& strength, int& intelligence, int& courage, int& love, bool& Thomas, bool& complete1, bool& complete2, bool& complete3, bool& complete4, bool& complete5, bool& complete6, bool& complete7) {
	system("cls");
	cout << "����� ���� �� ������ ���������?";
	int n;
	input();
	cin >> n;
	switch (n) {
	case 1:
		system("cls"); day1(name, strength, intelligence, courage, love, complete1); break;
	case 2:
		if (complete1 == true) {
			system("cls");
			day2(name, loveChoice, strength, intelligence, courage, love, complete2);
			break;
		}
		else {
			system("cls");
			cout << "��������� ���� 1, ����� ������� � ��� 2\n";
			system("pause");
		}
		break;
	case 3:
		if (complete2 == true) {
			system("cls");
			day3(name, loveChoice, strength, intelligence, courage, love, complete3);
			break;
		}
		else {
			system("cls");
			cout << "��������� ���� 2, ����� ������� � ��� 3\n";
			system("pause");
		}
		break;
	case 4: 
		if (complete3 == true) {
			system("cls");
			day4(name, loveChoice, strength, intelligence, courage, love, complete4);
			break;
		}
		else {
			system("cls");
			cout << "��������� ���� 3, ����� ������� � ��� 4\n";
			system("pause");
		}
		break;
	case 5: 
		if (complete4 == true) {
			system("cls");
			day5(name, loveChoice, strength, intelligence, courage, love, complete5);
			break;
		}
		else {
			system("cls");
			cout << "��������� ���� 4, ����� ������� � ��� 5\n";
			system("pause");
		}
		break;
	case 6:
		if (complete5 == true) {
			system("cls");
			day6(name, loveChoice, strength, intelligence, courage, love, Thomas, complete6);
			break;
		}
		else {
			system("cls");
			cout << "��������� ���� 5, ����� ������� � ��� 6\n";
			system("pause");
		}
		break;
	case 7:
		if (complete6 == true) {
			system("cls");
			day7(name, loveChoice, strength, intelligence, courage, love, Thomas, complete7);
			break;
		}
		else {
			system("cls");
			cout << "��������� ���� 6, ����� ������� � ��� 7\n";
			system("pause");
		}
		break;
	case 8:
		if (complete7 == true) {
			system("cls");
			day8(name, loveChoice, strength, intelligence, courage, love, Thomas);
			system("pause");
			break;
		}
		else {
			system("cls");
			cout << "��������� ���� 7, ����� ������� � ��� 8\n";
			system("pause");
		}
		break;
	}
}