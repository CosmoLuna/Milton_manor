#include <iostream>
#include "Functions.h"
using namespace std;

// Заставка
void showTitle() {
	cout << "\t____   __          ___   __  ___       ___" << endl;
	cout << "\t|  |  /  \\  |\\/|  /__/  /     |  |__  /__/" << endl;
	cout << "    .   |  |  \\__/  |  |  \\__   \\__   |  |__| \\__" << endl;

	cout << "   /|\\\t\t\t     ___   __\t          ___^_" << endl;
	cout << "   /|\\      |\\/|  | /|   /\\   |   /  \\  |__|     /_____\\" << endl;
	cout << "    |       |  |  |/ |  /  \\  |   \\__/  |  |     |_____|" << endl;
}

// Показ очков
void showPoints(int& S, int& I, int& C, int& L) {
	cout << "Ваши очки:\n";
	cout << "Сила " << S << endl << "Интеллект " << I << endl << "Смелость " << C << endl << "Любовь " << L << endl;
}

// Меню
void menu() {
	cout << "Меню:\n1. Играть\n2. Показать очки\nВведите команду -> ";
	int n;
	cin >> n;
}

// Первое распределение очков
void firstspread(int& S, int& I, int& C) {
	int points = 5;
	int number;
	cout << "В начале игры у вас " << points << " очков. Вы можете распределить их по собственному желанию." << endl;
	cout << "1. Сила;\n2. Интеллект;\n3. Смелость;\n";
	while (points != 0) {
		cout << "Осталось " << points << endl << "Выберите характеристику для добавления 1 очка -> ";
		cin >> number;
		if (number == 1)
			S++;
		else
			if (number == 2)
				I++;
			else
				C++;
		points--;
		cout << "1. Сила " << S << endl << "2. Интеллект " << I << endl << "3. Смелость " << C << endl;
	}
}

// Защита от неправильного ввода для  2 вариантов
void inputError(int &a) {
	while (a != 1 && a != 2) {
		cout << "\nВведите ответ -> ";
		cin >> a;
	}
}

// Защита от неправильного ввода для 3 вариантов
void inputError1(int& a) {
	while (a != 1 && a != 2 && a != 3) {
		cout << "\nВведите ответ -> ";
		cin >> a;
	}
}