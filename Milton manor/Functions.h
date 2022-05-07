#pragma once
#include <iostream>
#include <string>

// Заставка
void showTitle();

// Показ очков
void showPoints(int& S, int& I, int& C, int& L);

// Ввод
void input();

// Меню
void menu();

// Первое распределение очков
void firstspread(int& S, int& I, int& C);

// Защита от неправильного ввода для 2 вариантов
void input2Error(int& a);

// Защита от неправильного ввода для 3 вариантов
void input3Error(int& a);

// Переход на новую страницу
void Enter();

// День 1
void day1(std::string name, int& strength, int& intelligence, int& courage, int& love);

// День 2
void day2(std::string name, std::string loveChoice, int& strength, int& intelligence, int& courage, int& love);

// День 3
void day3(std::string name, std::string loveChoice, int& strength, int& intelligence, int& courage, int& love);

// День 4
void day4(std::string name, std::string loveChoice, int& strength, int& intelligence, int& courage, int& love);

// День 5
void day5(std::string name, std::string loveChoice, int& strength, int& intelligence, int& courage, int& love);

// День 6
void day6(std::string name, std::string loveChoice, int& strength, int& intelligence, int& courage, int& love);