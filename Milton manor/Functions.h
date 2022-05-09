#pragma once
#include <iostream>
#include <string>

// ��������
void showTitle();

// ����� �����
void showPoints(int& S, int& I, int& C, int& L);

// ����
void input();

// ������ ������������� �����
void firstspread(int& S, int& I, int& C);

// ������ �� ������������� ����� ��� 2 ���������
void input2Error(int& a);

// ������ �� ������������� ����� ��� 3 ���������
void input3Error(int& a);

// ������� �� ����� ��������
void Enter();

// ����
void menu(std::string name, std::string& loveChoice, int& strength, int& intelligence, int& courage, int& love, bool& Thomas, bool& complete1, bool& complete2, bool& complete3, bool& complete4, bool& complete5, bool& complete6, bool& complete7);

// �������� ���
void loadDay(std::string name, std::string& loveChoice, int& strength, int& intelligence, int& courage, int& love, bool& Thomas, bool& complete1, bool& complete2, bool& complete3, bool& complete4, bool& complete5, bool& complete6, bool& complete7);

// ���� 1
void day1(std::string name, int& strength, int& intelligence, int& courage, int& love, bool& complete1);
// ���� 2
void day2(std::string name, std::string &loveChoice, int& strength, int& intelligence, int& courage, int& love, bool& complete2);
// ���� 3
void day3(std::string name, std::string &loveChoice, int& strength, int& intelligence, int& courage, int& love, bool& complete3);
// ���� 4
void day4(std::string name, std::string &loveChoice, int& strength, int& intelligence, int& courage, int& love, bool& complete4);
// ���� 5
void day5(std::string name, std::string &loveChoice, int& strength, int& intelligence, int& courage, int& love, bool& complete5);
// ���� 6
void day6(std::string name, std::string &loveChoice, int& strength, int& intelligence, int& courage, int& love, bool &Thomas, bool& complete6);
// ���� 7
void day7(std::string name, std::string &loveChoice, int& strength, int& intelligence, int& courage, int& love, bool& Thomas, bool& complete7);
// ���� 8
void day8(std::string name, std::string& loveChoice, int& strength, int& intelligence, int& courage, int& love, bool& Thomas);