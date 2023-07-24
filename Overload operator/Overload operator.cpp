//Минимум для c++
#include <iostream> // стандартная библиотека с функциями
#include <iomanip> /*Манипуляция вводами данных, ввод консоли*/
#include <string> // объявлять переменную строкой
#include <stdlib.h> //содержаться классы (тренеры, векторы)
#include <cmath> //Возведение в степень
#include <windows.h> //доступ к API
#include <conio.h>
#include <dos.h>
#include <math.h>
#include <vector>
#include <sstream>
#include "Date.h"
using namespace std; // рабочее пространство, чтобы не писать каждый раз std

int main()
{
#pragma region Starterpuck
	SetConsoleOutputCP(1251); //изменение кодировки на другую
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian"); //добавление русской локализации в консоль
	srand(time(NULL)); //обнуление рандома
#pragma endregion

	date* test = new date[2];
	int dd, mm, yyyy, day;
	cout << "Введите дату: ", cin >> dd >> mm >> yyyy; 
	test[0] = date(dd, mm, yyyy);
	/*cout << endl; 
	cout << "Введите дату(1): ", cin >> dd >> mm >> yyyy;	
	test[1] = date(dd,mm,yyyy);
	cout << endl;
	day = test[0] - test[1];
	cout << day << endl;
	cout << "Введите сколько дней добавить - ", cin >> day;
	cout << endl;
	test[0] = test[0] + day;*/
	test[0].print();
	cout << "========================"<<endl;
	cout << test[0];
}