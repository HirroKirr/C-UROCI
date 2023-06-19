/* Домашнее задание. Написать программу, которая выводит на экран прямоугольник символом *. Высота и ширина задаётся пользователем. */

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int breadth;
	int length;

	cout << "Введите высоту прямоугольника!" << endl;
	cin >> breadth;

	cout << "Введите ширина прямоугольника!" << endl;
	cin >> length;

	for (int f = 0; f < breadth; f++)
	{
		for (int a = 0; a < length; a++)
		{
			cout << "*";
		}
		cout << endl;
	}

	


	cout << endl;





}