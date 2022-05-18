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
	string loveChoice;
	bool Thomas = true;
	bool complete1 = false, complete2 = false, complete3 = false, complete4 = false, complete5 = false, complete6 = false, complete7 = false;
	showTitle();

	cout << "\nИгра \"Поместье Милтон\"\nПо мотивам сериала \"Призраки усадьбы Блай\".\nОт вашего выбора зависит исход игры. ";
	cout << "Выбирайте с умом. Начинаем!\nКак вас зовут? -> ";
	string name;
	cin >> name;
	cout << "Добро пожаловать в игру, " << name << "!\n\n";

	Enter();

	firstspread(strength, intelligence, courage);

	Enter();
	cout << "В игре так же есть любовная линия, но пока она недоступна.\n";
	showPoints(strength, intelligence, courage, love);
	
	Enter();

	// menu(name, loveChoice, strength, intelligence, courage, love, Thomas, complete1, complete2, complete3, complete4, complete5, complete6, complete7);


	day1(name, strength, intelligence, courage, love, complete1);
	day2(name, loveChoice, strength, intelligence, courage, love, complete2);
	day3(name, loveChoice, strength, intelligence, courage, love, complete3);
	day4(name, loveChoice, strength, intelligence, courage, love, complete4);
	day5(name, loveChoice, strength, intelligence, courage, love, complete5);
	day6(name, loveChoice, strength, intelligence, courage, love, Thomas, complete6);
	day7(name, loveChoice, strength, intelligence, courage, love, Thomas, complete7);
	day8(name, loveChoice, strength, intelligence, courage, love, Thomas);


	return 0;
}