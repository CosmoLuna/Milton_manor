#pragma once
#include <iostream>
#include <string>

// ��������
void showTitle();

// ����� �����
void showPoints(int& S, int& I, int& C, int& L);

// ����
void input();

// ����
void menu();

// ������ ������������� �����
void firstspread(int& S, int& I, int& C);

// ������ �� ������������� ����� ��� 2 ���������
void input2Error(int& a);

// ������ �� ������������� ����� ��� 3 ���������
void input3Error(int& a);

// ������� �� ����� ��������
void Enter();

// ���� 1
void day1(std::string name, int& strength, int& intelligence, int& courage, int& love);

// ���� 2
void day2(std::string name, std::string loveChoice, int& strength, int& intelligence, int& courage, int& love);

// ���� 3
void day3(std::string name, std::string loveChoice, int& strength, int& intelligence, int& courage, int& love);

// ���� 4
void day4(std::string name, std::string loveChoice, int& strength, int& intelligence, int& courage, int& love);

// ���� 5
void day5(std::string name, std::string loveChoice, int& strength, int& intelligence, int& courage, int& love);

// ���� 6
void day6(std::string name, std::string loveChoice, int& strength, int& intelligence, int& courage, int& love);