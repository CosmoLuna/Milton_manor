#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include "Functions.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int strength = 0, intelligence = 0, courage = 0, love = 0;
	string loveChoice, strChoice;

	// showTitle();

	cout << "\nИгра \"Поместье Милтон\".\nОт вашего выбора зависит исход игры. ";
	cout << "Выбирайте с умом. Начинаем!\nКак вас зовут? -> ";
	string name;
	cin >> name;
	cout << "Добро пожаловать в игру, " << name << "!\n\n";

	// firstspread(strength, intelligence, courage);

	Enter();
	cout << "В игре так же есть любовная линия, но пока она недоступна.\n";
	showPoints(strength, intelligence, courage, love);

	Enter();

	// day1(name, strength, intelligence, courage, love);
	// day2(name, loveChoice, strength, intelligence, courage, love);
	// day3(name, loveChoice, strength, intelligence, courage, love);
	// day4(name, loveChoice, strength, intelligence, courage, love);
	// day5(name, loveChoice, strength, intelligence, courage, love);
	day6(name, loveChoice, strength, intelligence, courage, love);




	return 0;
}