#pragma once
#include <iostream>
#include <string>

// Заставка
void showTitle();

// Показ очков
void showPoints(int& S, int& I, int& C, int& L);

// Ввод
void input();

// Первое распределение очков
void firstspread(int& S, int& I, int& C);

// Защита от неправильного ввода для 2 вариантов
void input2Error(int& a);

// Защита от неправильного ввода для 3 вариантов
void input3Error(int& a);

// Переход на новую страницу
void Enter();

// Меню
void menu(std::string name, std::string& loveChoice, int& strength, int& intelligence, int& courage, int& love, bool& Thomas, bool& complete1, bool& complete2, bool& complete3, bool& complete4, bool& complete5, bool& complete6, bool& complete7);

// Загрузка дня
void loadDay(std::string name, std::string& loveChoice, int& strength, int& intelligence, int& courage, int& love, bool& Thomas, bool& complete1, bool& complete2, bool& complete3, bool& complete4, bool& complete5, bool& complete6, bool& complete7);

// День 1
void day1(std::string name, int& strength, int& intelligence, int& courage, int& love, bool& complete1);
// День 2
void day2(std::string name, std::string &loveChoice, int& strength, int& intelligence, int& courage, int& love, bool& complete2);
// День 3
void day3(std::string name, std::string &loveChoice, int& strength, int& intelligence, int& courage, int& love, bool& complete3);
// День 4
void day4(std::string name, std::string &loveChoice, int& strength, int& intelligence, int& courage, int& love, bool& complete4);
// День 5
void day5(std::string name, std::string &loveChoice, int& strength, int& intelligence, int& courage, int& love, bool& complete5);
// День 6
void day6(std::string name, std::string &loveChoice, int& strength, int& intelligence, int& courage, int& love, bool &Thomas, bool& complete6);
// День 7
void day7(std::string name, std::string &loveChoice, int& strength, int& intelligence, int& courage, int& love, bool& Thomas, bool& complete7);
// День 8
void day8(std::string name, std::string& loveChoice, int& strength, int& intelligence, int& courage, int& love, bool& Thomas);