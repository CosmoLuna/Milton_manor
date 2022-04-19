#pragma once
#include <iostream>

// Заставка
void showTitle();

// Показ очков
void showPoints(int& S, int& I, int& C, int& L);

// Меню
void menu();

// Первое распределение очков
void firstspread(int& S, int& I, int& C);

// Защита от неправильного ввода для 2 вариантов
void inputError(int& a);

// Защита от неправильного ввода для 3 вариантов
void inputError1(int& a);